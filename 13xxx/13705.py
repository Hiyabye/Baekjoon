from decimal import *
getcontext().prec = 100
getcontext().rounding = ROUND_HALF_UP

def factorial(n):
  ret = Decimal('1')
  for i in range(2, n+1):
    ret *= Decimal(str(i))
  return ret

def sin(x):
  pi = Decimal('3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342')
  x %= 2*pi
  ret = Decimal('0')
  for i in range(100):
    ret += (-1)**i * x**(2*i+1) / Decimal('1' if i == 0 else factorial(2*i+1))
  return ret

def f(x):
  return a*x + b*sin(x) - c

a, b, c = map(Decimal, input().split())
lo, hi = (c-b)/a, (c+b)/a
while hi-lo > Decimal('1e-50'):
  mid = (lo+hi)/2
  if f(mid) > 0:
    hi = mid
  else:
    lo = mid

print(round(mid, 6))