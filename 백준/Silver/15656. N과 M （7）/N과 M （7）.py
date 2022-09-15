import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def func():
    if len(res)==m:
        print(*res)
        return
    
    for i in range(n):
        res.append(s[i])
        func()
        res.pop()

n,m = map(int, input().split())
s = sorted(list(map(int, input().split())))
res = []
func()