import base64

s = input()
print(base64.b32decode(s.encode()).decode())