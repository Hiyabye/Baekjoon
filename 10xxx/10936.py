import base64

s = input()
print(base64.b64decode(s.encode()).decode())