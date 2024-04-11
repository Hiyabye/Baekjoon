import hashlib

s = input()
print(hashlib.md5(s.encode()).hexdigest())