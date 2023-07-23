import random

def gcd(a, b):
  if b == 0:
    return a
  return gcd(b, a % b)

def power(base, exp, mod):
  if exp == 0:
    return 1
  if exp == 1:
    return base
  half = power(base, exp // 2, mod) % mod
  if exp % 2 == 0:
    return half * half % mod
  else:
    return half * half * base % mod

def miller_rabin(n, a):
  r = 0
  d = n - 1
  while d % 2 == 0:
    r += 1
    d //= 2
  
  x = power(a, d, n)
  if x == 1 or x == n - 1:
    return True
  for _ in range(r-1):
    x = power(x, 2, n)
    if x == n - 1:
      return True
  return False

def prime(n):
  a = [2, 3, 5, 7, 11, 13, 17, 19, 23]
  if n <= 1:
    return False
  if n <= 3:
    return True
  if n % 2 == 0:
    return False
  
  for i in a:
    if n == i:
      return True
    if not miller_rabin(n, i):
      return False
  return True

def pollard_rho(n):
  if n % 2 == 0:
    return 2
  if prime(n):
    return n
  
  x = random.randrange(2, n)
  y = x
  c = random.randrange(1, 10)
  d = 1
  while d == 1:
    x = (x * x + c) % n
    y = (y * y + c) % n
    y = (y * y + c) % n
    d = gcd(abs(x - y), n)
    if d == n:
      return pollard_rho(n)
  
  if prime(d):
    return d
  else:
    return pollard_rho(d)

n = int(input())
f = []
while n != 1:
  p = pollard_rho(n)
  f.append(p)
  n //= p
  
f.sort()
for i in f:
  print(i)