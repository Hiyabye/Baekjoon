import sys

def solve():
  n = int(sys.stdin.readline())
  sum = 0
  for i in range(n):
    sum += int(sys.stdin.readline())
  if sum > 0:
    print('+')
  elif sum < 0:
    print('-')
  else:
    print(0)

for _ in range(3):
  solve()