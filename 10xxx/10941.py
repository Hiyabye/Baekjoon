import base64

s = input()
print(base64.b16decode(s.encode()).decode())