x, n = map(int, input().split())

a = 1
s = str(a)
while len(s) < n:
  a *= x
  s += str(a)
print(s[n-1])