# scripts/readme.py
# README.md 파일을 자동으로 업데이트 해주는 스크립트

import requests
import json
from datetime import datetime, timezone, timedelta
import glob

# solved.ac API로 해결한 문제 수를 가져옴
def getSolvedCount():
  profile = requests.get("https://solved.ac/api/v3/user/show?handle=hiyabye")
  if profile.status_code != requests.codes.ok:
    print("Failed to get user info")
    print(f"Status code: {profile.status_code}")
    exit(1)
  profile = json.loads(profile.content.decode("utf-8"))
  return profile["solvedCount"]

# solved.ac API로 해결한 문제들을 가져옴 (50개씩)
def getProblemsPartial(page):
  solved = requests.get(f"https://solved.ac/api/v3/search/problem?query=solved_by%3Ahiyabye&sort=id&direction=asc&page={page}")
  if solved.status_code != requests.codes.ok:
    print("Failed to get solved problems")
    print(f"Status code: {solved.status_code}")
    exit(1)
  solved = json.loads(solved.content.decode("utf-8"))
  return solved

# solved.ac API로 해결한 문제들을 가져옴 (모두)
def getProblems():
  solvedCount = int(getSolvedCount())
  pages = (solvedCount - 1) // 50 + 1
  problems = []
  for page in range(1, pages + 1):
    solved = getProblemsPartial(page)
    for problem in solved["items"]:
      problems.append((int(problem["problemId"]), problem["titleKo"], int(problem["level"])))
    print(f"Progress: {len(problems)} / {solvedCount}")
  return problems

# 문제 번호를 입력받아 문제 URL을 반환
def getProblemURL(id):
  return f"https://www.acmicpc.net/problem/{id}"

# 문제 난이도를 입력받아 문제 티어를 반환
def getProblemTier(level):
  tier = {
    0: "Unrated",
    1: "Bronze V", 2: "Bronze IV", 3: "Bronze III", 4: "Bronze II", 5: "Bronze I",
    6: "Silver V", 7: "Silver IV", 8: "Silver III", 9: "Silver II", 10: "Silver I",
    11: "Gold V", 12: "Gold IV", 13: "Gold III", 14: "Gold II", 15: "Gold I",
    16: "Platinum V", 17: "Platinum IV", 18: "Platinum III", 19: "Platinum II", 20: "Platinum I",
    21: "Diamond V", 22: "Diamond IV", 23: "Diamond III", 24: "Diamond II", 25: "Diamond I",
    26: "Ruby V", 27: "Ruby IV", 28: "Ruby III", 29: "Ruby II", 30: "Ruby I"
  }
  return f'<img src="https://static.solved.ac/tier_small/{level}.svg" alt="{tier[level]}" width="25" height="25">'

# 문제 번호를 입력받아 솔루션 경로를 모두 반환 (문자열로)
def getSolutionPath(id):
  # 디렉토리
  if (id < 10000):
    id = f"0{id}"
  dir = f"../{str(id)[:2]}xxx"

  # 파일 찾기
  files = glob.glob(f"{dir}/{id}.*")
  if len(files) == 0:
    print(f"Failed to find solution for problem {id}")
    exit(1)
  solution = ""
  for file in files:
    file = file[3:]
    if file.endswith(".c"):
      solution += f"[C99]({file}) "
    elif file.endswith(".cpp"):
      solution += f"[C++17]({file}) "
    elif file.endswith(".py"):
      solution += f"[Python 3]({file}) "
    elif file.endswith(".txt"):
      solution += f"[Text]({file}) "
    elif file.endswith(".gs"):
      solution += f"[GolfScript]({file}) "
    else:
      print(f"Unknown file type: {file}")
      exit(1)
  return solution

# README.md 헤더를 반환
def getHeader():
  header = "# Baekjoon\n\n"
  header += "백준 알고리즘 문제 풀이 기록\n\n"
  header += "[![Solved.ac 프로필](http://mazassumnida.wtf/api/v2/generate_badge?boj=hiyabye)](https://solved.ac/hiyabye)\n\n"
  header += "주로 C/C++로 해결하였으며, 가끔 Python으로도 문제를 풀었습니다. 목록은 다음과 같습니다:\n\n"
  header += "마지막으로 업데이트: "
  header += datetime.now(timezone(timedelta(hours=9))).strftime("%Y-%m-%d %H:%M:%S")
  header += " (KST)\n\n"
  return header

# README.md 테이블을 반환
def getTable():
  problems = getProblems()
  table = "| # | 제목 | 난이도 | 솔루션 |\n"
  table += "|:---:|:---:|:---:|:---:|\n"
  for (id, title, level) in problems:
    url = getProblemURL(id)
    tier = getProblemTier(level)
    path = getSolutionPath(id)
    table += f"| [{id}]({url}) | {title} | {tier} | {path}|\n"
  return table

# 메인 함수
if __name__ == "__main__":
  with open("../README.md", "w") as f:
    f.write(getHeader() + getTable())
  print("README.md updated")
