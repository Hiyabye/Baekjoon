n = int(input())
s = [c for c in input() if c != '0']
s.sort()

a = int(''.join(s[::2])) if s[::2] else 0
b = int(''.join(s[1::2])) if s[1::2] else 0
print(a + b)
