from itertools import permutations

x, y, z = map(int, input().split())
v = sorted([x, y, z])

ans = 1e9
for p in permutations(v):
  num = 100 * p[0] + 10 * p[1] + p[2]
  if num < 100:
    continue
  ans = min(ans, num)

print(int(ans))