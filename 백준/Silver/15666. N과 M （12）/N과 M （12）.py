import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

res = []
def func():
    if len(res)==m:
        print(*res)
        return
    
    pre = 0
    for i in range(n):
        if pre == s[i]: continue
        if len(res) != 0 and res[-1] > s[i]: continue
            
        res.append(s[i])
        pre = s[i]
        func()
        res.pop()

n,m = map(int, input().split())
s = sorted(list(map(int, input().split())))
func()