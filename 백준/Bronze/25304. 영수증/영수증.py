import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

t = int(input().rstrip())
n = int(input().rstrip())

res = 0
for _ in range(n):
    p,v = map(int, input().split())
    res += p*v

if t==res:
    print("Yes")
else:
    print("No")