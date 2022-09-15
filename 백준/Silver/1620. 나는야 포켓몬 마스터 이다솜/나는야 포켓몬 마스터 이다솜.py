import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

n,m = map(int, input().split())

pocket = {}
for i in range(1, n+1):
    a = input().rstrip()
    pocket[i] = a
    pocket[a] = i

for _ in range(m):
    p = input().rstrip()
    if p.isdigit():
        print(pocket[int(p)])
    else:
        print(pocket[p])