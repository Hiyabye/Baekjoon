n, p = map(int, input().split())

ans = str(n ** p)
for i in range(0, len(ans), 70):
  print(ans[i:i+70])