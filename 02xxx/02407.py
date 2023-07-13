n, m = map(int, input().split())

res = 1
for i in range(0, m):
  res *= (n-i)
  res //= (i+1)

print(res)