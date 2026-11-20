# scripts/format.py
# astyle로 C/C++ 소스를 포맷한 뒤, 한 줄에 이어 쓴 반복문(for (...) for (...) {)의 본문을
# 반복문 하나일 때와 같은 들여쓰기로 되돌리는 스크립트
#
# 사용법: python3 scripts/format.py [파일 ...]  (파일을 주지 않으면 git이 추적하는 모든 .c/.cpp 파일)

import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OPTIONS = os.path.join(ROOT, ".astylerc")
INDENT = 2 # .astylerc의 indent=spaces=2와 같아야 함
HEADER = re.compile(r"(for|while|if)\s*\(")

# astyle을 .astylerc 옵션으로 실행해서 포맷된 소스를 반환
def run_astyle(src):
  result = subprocess.run(["astyle", "--project=none", f"--options={OPTIONS}", "--quiet"], input=src, capture_output=True, text=True, check=True)
  return result.stdout

# 문자열/문자 리터럴과 주석을 지운 코드를 반환 (중괄호 개수를 셀 때 사용)
def strip_code(line, in_comment):
  out = []
  i = 0
  while i < len(line):
    if in_comment:
      end = line.find("*/", i)
      if end == -1: return "".join(out), True
      in_comment = False
      i = end + 2
    elif line.startswith("//", i):
      break
    elif line.startswith("/*", i):
      in_comment = True
      i += 2
    elif line[i] in "\"'":
      quote = line[i]
      i += 1
      while i < len(line) and line[i] != quote:
        i += 2 if line[i] == "\\" else 1
      i += 1
    else:
      out.append(line[i])
      i += 1
  return "".join(out), in_comment

# 줄이 "for (...) for (...) {"처럼 이어진 헤더로 시작해서 {로 끝나면 헤더 개수를, 아니면 0을 반환
def count_headers(code):
  code = code.strip()
  count = 0
  i = 0
  while True:
    m = HEADER.match(code, i)
    if not m: break
    depth = 0
    j = m.end() - 1
    while j < len(code):
      if code[j] == "(": depth += 1
      elif code[j] == ")":
        depth -= 1
        if depth == 0: break
      j += 1
    if depth != 0: return 0
    count += 1
    i = j + 1
    while i < len(code) and code[i] == " ": i += 1
  return count if code[i:] == "{" else 0

# 이어진 헤더 블록마다 본문과 닫는 중괄호를 (헤더 개수 - 1)단계만큼 내어 씀
def fix_chained_headers(src):
  lines = src.split("\n")
  codes = []
  in_comment = False
  for line in lines:
    code, in_comment = strip_code(line, in_comment)
    codes.append(code)

  for start, code in enumerate(codes):
    headers = count_headers(code)
    if headers < 2: continue
    extra = " " * (INDENT * (headers - 1))
    depth = 1
    for k in range(start + 1, len(lines)):
      if lines[k].startswith(extra): lines[k] = lines[k][len(extra):]
      depth += codes[k].count("{") - codes[k].count("}")
      if depth <= 0: break
  return "\n".join(lines)

def main():
  files = sys.argv[1:]
  if not files:
    tracked = subprocess.run(["git", "ls-files", "*.c", "*.cpp"], cwd=ROOT, capture_output=True, text=True, check=True)
    files = [os.path.join(ROOT, f) for f in tracked.stdout.splitlines()]

  changed = 0
  for path in files:
    with open(path, encoding="utf-8") as f:
      src = f.read()
    out = fix_chained_headers(run_astyle(src))
    if out != src:
      with open(path, "w", encoding="utf-8") as f:
        f.write(out)
      changed += 1
  print(f"{changed}/{len(files)} files formatted")

if __name__ == "__main__":
  main()
