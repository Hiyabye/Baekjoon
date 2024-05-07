n = int(input())
if n & 1:
  n += 1

ans = 1
for i in range(2, n+1, 2):
  ans *= i * (i - 1) // 2
  ans //= i // 2

print(ans)