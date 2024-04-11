import hashlib

s = input()
print(hashlib.sha512(s.encode()).hexdigest())