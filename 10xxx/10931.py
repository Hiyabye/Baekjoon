import hashlib

s = input()
print(hashlib.sha384(s.encode()).hexdigest())