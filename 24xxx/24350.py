n, k = map(int, input().split())

ans = 1
for i in range(k):
  ans *= n-i
  ans //= i+1

print(str(ans).count('0'))