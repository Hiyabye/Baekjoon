def gcd(a, b):
  return a if b == 0 else gcd(b, a % b)

def P1(x1, y1, x2, y2, x3, y3):
  return gcd(abs(x1-x2), abs(y1-y2)) + gcd(abs(x2-x3), abs(y2-y3)) + gcd(abs(x3-x1), abs(y3-y1))