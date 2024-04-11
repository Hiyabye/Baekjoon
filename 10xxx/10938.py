import base64

s = input()
print(base64.b32encode(s.encode()).decode())