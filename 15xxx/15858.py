from decimal import Decimal

a, b, c = map(Decimal, input().split())
print(a * b / c)