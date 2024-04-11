import base64

s = input()
print(base64.b16encode(s.encode()).decode())