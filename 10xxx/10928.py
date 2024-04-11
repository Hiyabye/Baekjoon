import hashlib

s = input()
print(hashlib.sha1(s.encode()).hexdigest())