# scripts/update_readme.py
# README.md 파일을 자동으로 업데이트 해주는 스크립트

from datetime import datetime, timezone, timedelta
import glob
import json
import os
import requests
from time import sleep
from tqdm import tqdm

# solved.ac API로 해결한 문제 수를 int로 가져옴
def get_solved_count(handle):
  response = requests.get(f"https://solved.ac/api/v3/user/show", params={"handle": handle})
  response.raise_for_status()
  return int(response.json()["solvedCount"])

# solved.ac API로 해결한 문제들을 50개씩 가져옴
def get_problems(handle, page):
  response = requests.get("https://solved.ac/api/v3/search/problem", params={"query": f"solved_by:{handle}", "direction": "asc", "page": page, "sort": "id"})
  response.raise_for_status()
  return response.json()

# 문제 난이도를 입력받아 문제 티어를 반환
def get_problem_tier(level):
  tier = {
    0: "Unrated",
    1: "B5", 2: "B4", 3: "B3", 4: "B2", 5: "B1",
    6: "S5", 7: "S4", 8: "S3", 9: "S2", 10: "S1",
    11: "G5", 12: "G4", 13: "G3", 14: "G2", 15: "G1",
    16: "P5", 17: "P4", 18: "P3", 19: "P2", 20: "P1",
    21: "D5", 22: "D4", 23: "D3", 24: "D2", 25: "D1",
    26: "R5", 27: "R4", 28: "R3", 29: "R2", 30: "R1"
  }
  return f'<img alt="{tier[level]}" src="assets/{level}.svg" height="24">'

# 문제 번호를 입력받아 솔루션 경로를 모두 반환 (문자열로)
def get_solution_path(id):
  # 디렉토리
  if (id < 10000):
    id = f"0{id}"
  dir = f"{str(id)[:2]}xxx"

  # 파일 확장자
  ext = {
    ".ads": "Ada",
    ".a68": "Algol 68",
    ".bas": "FreeBASIC",
    ".c"  : "C",
    ".cpp": "C++",
    ".f"  : "Fortran",
    ".gs" : "Golfscript",
    ".js" : "node.js",
    ".py" : "Python",
    ".txt": "Text",
    ".vb" : "Visual Basic"
  }

  # 파일 찾기
  files = glob.glob(f"{dir}/{id}.*")
  if len(files) == 0:
    raise ValueError(f"Failed to find solution for problem {id}")
  files.sort()
  solution = ""
  for file in files:
    solution += f"[{ext[file[file.rfind('.'):]]}]({file}) "
  return solution

# README.md 헤더를 반환
def get_header(handle):
  header = '<div align="center">\n\n'
  header += "# Baekjoon\n\n"
  header += "**백준 문제 풀이 저장소**\n\n"
  header += "![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/Hiyabye/Baekjoon?style=flat-square)\n"
  header += "![GitHub last commit](https://img.shields.io/github/last-commit/Hiyabye/Baekjoon?style=flat-square)\n\n"
  header += "[![solved.ac 프로필](http://mazassumnida.wtf/api/v2/generate_badge?boj=hiyabye)](https://solved.ac/hiyabye)\n"
  header += "![solved.ac 잔디](http://mazandi.herokuapp.com/api?handle=hiyabye&theme=warm)\n\n"
  header += "마지막으로 업데이트: "
  header += datetime.now(timezone(timedelta(hours=9))).strftime("%Y-%m-%d %H:%M:%S")
  header += " (KST)\n\n"
  header += "목록이 너무 길어서 `Ctrl+F` 단축키로 문제를 찾는 것을 권장합니다.\n\n"
  header += "코드를 그대로 복붙하는 것은 자제 부탁드립니다.\n\n"
  return header

# README.md 테이블을 반환
def get_table(problems):
  table = "| 번호 | 레벨 | 코드 |\n"
  table += "|:---:|:---:|:---:|\n"

  print("Generating table...")
  for (id, level) in tqdm(problems):
    tier = get_problem_tier(level)
    path = get_solution_path(id)
    table += f"| {id} | {tier} | {path}|\n"
  return table

def get_footer():
  footer = "\n</div>"
  return footer

# 메인 함수
if __name__ == "__main__":
  # solved.ac API로 푼 문제 수 가져오기
  solved_count = get_solved_count("hiyabye")
  pages = (solved_count - 1) // 50 + 1
  problems = []

  # solved.ac API로 문제 정보 가져오기
  print(f"Getting problems from {pages} pages...")
  for page in tqdm(range(1, pages+1)):
    attempts = 0
    while attempts < 3:
      try:
        solved = get_problems("hiyabye", page)
        break
      except:
        attempts += 1
        print(f"Failed to get problems from page {page}, attempt {attempts}")
        sleep(1)
    if attempts == 3:
      print(f"Failed to get problems from page {page} after 3 attempts, skipping")
      continue
    for problem in solved["items"]:
      problems.append((int(problem["problemId"]), int(problem["level"])))

  # README.md 파일 업데이트
  with open("README.md.tmp", "w", encoding="utf-8") as f:
    f.write(get_header("hiyabye") + get_table(problems) + get_footer())

  # README.md.tmp과 README.md을 비교하여 변경사항이 있으면 업데이트
  # 이때 첫 20줄은 헤더이므로 비교에서 제외
  with open("README.md.tmp", "r", encoding="utf-8") as f:
    tmp = f.readlines()
    with open("README.md", "r", encoding="utf-8") as f:
      readme = f.readlines()
      if tmp[20:] != readme[20:]:
        with open("README.md", "w", encoding="utf-8") as f:
          f.writelines(tmp)
        print("README.md updated without errors")
      else:
        print("README.md is up to date")
      
  # README.md.tmp 파일 삭제
  os.remove("README.md.tmp")
