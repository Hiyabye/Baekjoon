import hashlib

s = input()
print(hashlib.sha224(s.encode()).hexdigest())