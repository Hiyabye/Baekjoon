def solve(n):
  print(n)
  while n >= 100:
    n = n // 10 - n % 10
    print(n)
  return n == 11

t = int(input())
for i in range(t):
  n = int(input())
  if solve(n):
    print(f"The number {n} is divisible by 11.\n")
  else:
    print(f"The number {n} is not divisible by 11.\n")