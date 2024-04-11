import hashlib

s = input()
print(hashlib.sha256(s.encode()).hexdigest())