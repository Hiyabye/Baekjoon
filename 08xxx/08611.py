def palindrome(a):
  return a == a[::-1]

def base(n, b):
  d = []
  while n:
    d.append(int(n % b))
    n //= b
  return "".join(map(str, d[::-1]))

n = int(input())
flag = False
for b in range(2, 11):
  if palindrome(base(n, b)):
    print(b, base(n, b))
    flag = True

if not flag:
  print("NIE")
