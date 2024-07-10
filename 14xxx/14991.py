n = int(input())
b = list(map(int, input().split()))

ans = 1
for i in range(n):
  ans = 2 * ans - b[i]
  if ans < 0:
    print("error")
    exit()

mod = 1000000007
print(ans % mod)