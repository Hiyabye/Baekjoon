def isPrime(n):
  if n <= 1:
    return False
  for i in range(2, int(n ** 0.5) + 1):
    if n % i == 0:
      return False
  return True

def isSquare(n):
  if n <= 0:
    return False
  s = int(n ** 0.5)
  return s * s == n

def P2(A):
  ans = 0
  for i, v in enumerate(A):
    if isSquare(v) and isPrime(i):
      ans += v
  return ans