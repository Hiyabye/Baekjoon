n = int(input())

exp = ""
for i in range(2*n-1):
  exp += input()
exp = exp.replace("/", "//")

print(eval(exp))