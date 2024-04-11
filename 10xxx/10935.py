import base64

s = input()
print(base64.b64encode(s.encode()).decode())