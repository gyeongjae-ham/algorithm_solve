import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

res = []
def func(start):
    if len(res)==m:
        print(*res)
        return
    
    pre = 0
    for i in range(start, n):
        if vist[i]: continue
        if pre == s[i]: continue
        
        res.append(s[i])
        vist[i] = True
        pre = s[i]
        func(i+1)
        res.pop()
        vist[i] = False

n,m = map(int, input().split())
s = sorted(list(map(int, input().split())))
vist = [False] * n
func(0)