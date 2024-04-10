a = int(input())
b = int(input())
c = a * b

print(a)
print(b)
while b != 0:
  print(a * (b % 10))
  b = b // 10
print(c)