import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def func(start):
    if len(res)==m:
        print(*res)
        return
    
    for i in range(start, n):
        res.append(s[i])
        func(i)
        res.pop()

n,m = map(int, input().split())
s = sorted(list(map(int, input().split())))
res = []
func(0)