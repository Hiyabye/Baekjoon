def precompute():
  f = {0: 0, 1: 1}
  a, b = 0, 1
  for i in range(2, 100001):
    a, b = b, a + b
    f[b] = i
  return f

def solve(f):
  n = int(input())
  print(f[n])

f = precompute()
t = int(input())
for i in range(t):
  solve(f)