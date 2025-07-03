a, op, b, eq, c = input().split()

ans = []
for i in range(2, 11):
  try:
    if eval(f"{int(a, i)}{op}{int(b, i)}=={int(c, i)}"):
      ans.append(i)
  except ValueError:
    continue

print(len(ans))
print(*ans)