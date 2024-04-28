from decimal import *

getcontext().prec = 100

def solve():
  a, b, c, d = map(int, input().split())
  l = Decimal(a) + Decimal(b).sqrt()
  r = Decimal(c) + Decimal(d).sqrt()

  if l == r:
    print("Equal")
  elif l < r:
    print("Less")
  else:
    print("Greater")

n = int(input())
for i in range(n):
  solve()