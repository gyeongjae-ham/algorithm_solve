import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def func(start):
    if len(res)==m:
        print(*res)
        return
    
    for i in range(start, n):
        if s[i] not in res:
            res.append(s[i])
            func(i+1)
            res.pop()

n,m = map(int, input().split())
s = sorted(list(map(int, input().split())))
res = []
func(0)