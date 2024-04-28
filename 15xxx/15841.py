fibo = [0, 1]
for i in range(2, 491):
  fibo.append(fibo[i-1] + fibo[i-2])

n = int(input())
while n > 0:
  print(f"Hour {n}: {fibo[n]} cow(s) affected")
  n = int(input())