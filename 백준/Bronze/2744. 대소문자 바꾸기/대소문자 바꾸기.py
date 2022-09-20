import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

r = ""
for i in input():
    r += i.upper() if i.islower() else i.lower()
print(r)