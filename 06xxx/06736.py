def fact(n):
  ret = 1
  for i in range(2, n+1):
    ret *= i
  return ret

def solve():
  a, b = map(int, input().split())
  print(str(fact(a)).count(str(b)))

t = int(input())
for i in range(t):
  solve()