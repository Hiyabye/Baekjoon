import random
from math import log
from sys import stdin

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
  a = [2, 3, 5, 7, 11]
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

def fibonacci(n):
  if n < len(f):
    return f[n]
  else:
    f.append(fibonacci(n-1) + fibonacci(n-2))
    return f[n]

def find_f(a, b):
  for i in range(0, 200):
    if fibonacci(i) > b:
      return -1
    if fibonacci(i) >= a:
      return i
  return -1

f = [0, 1]

for line in stdin:
  s = line.split(" ")
  a = int(s[0], 16)
  b = int(s[1], 16)
  if a >= b:
    break
  
  print(f"Range {a} to {b}:")
  c = find_f(a, b)

  if c == -1:
    print("No Fibonacci numbers in the range")
    print()
    continue
  elif c == 0:
    print("Fib(0) = 0, lg does not exist")
    print("No prime factors")
    c = find_f(1, b)
    if c == -1:
      continue

  if c == 1:
    print("Fib(1) = 1, lg is 0.000000")
    print("No prime factors")
    print("Fib(2) = 1, lg is 0.000000")
    print("No prime factors")
    c = find_f(2, b)
    if c == -1:
      continue
  
  while f[c] <= b:
    print(f"Fib({c}) = {f[c]}, lg is {log(f[c], 2):.6f}")
    print("Prime factors: ", end="")

    d = f[c]
    g = []
    while d != 1:
      e = pollard_rho(d)
      g.append(e)
      d //= e

    g.sort()
    print(g[0], end="")
    for i in range(len(g)-1):
      if i != len(g)-1:
        print(" ", end="")
      print(g[i+1], end="")
    print()
    c = find_f(f[c]+1, b)
  print()