a, b = input().split()
a, b = int(a), int(b)
q, r = divmod(a, b)

if r < 0:
  if b > 0:
    q -= 1
    r += b
  else:
    q += 1
    r -= b

print(q)
print(r)
