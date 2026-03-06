def solve():
  x = int(input())
  y = int(input())
  z = int(input())
  return x * y == z

t = int(input())
for _ in range(t):
  print("Infinity" if solve() else "Finite")
