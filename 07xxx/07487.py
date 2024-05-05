def gcd(a, b):
  if b == 0:
    return a
  return gcd(b, a % b)

def solve():
  a = int(input())
  b = int(input())
  print(gcd(a, b))

n = int(input())
for i in range(n):
  solve()
