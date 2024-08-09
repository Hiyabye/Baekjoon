def solve():
  m, n = map(int, input().split())
  v = [list(map(int, input().split())) for _ in range(n)]
  a = [1] * m
  for i in range(n):
    for j in range(m):
      a[j] *= v[i][j]
  ans = 0
  for i in range(m):
    if a[i] >= a[ans]:
      ans = i
  print(ans + 1)

t = int(input())
for _ in range(t):
  solve()