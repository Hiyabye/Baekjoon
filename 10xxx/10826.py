a = [0, 1]
for i in range(1, 10001):
  a.append(a[i] + a[i-1])

n = int(input())
print(a[n])