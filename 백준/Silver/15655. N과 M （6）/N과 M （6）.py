import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def func(start):
    if len(res)==m:
        print(' '.join(map(str,res)))
        return
    
    for i in s:
        if i not in res and len(res) == 0:
            res.append(i)
            func(i)
            res.pop()
        elif i not in res:
            if len(res) !=0 and i > res[-1]:
                res.append(i)
                func(i)
                res.pop()

n,m = map(int, input().split())
s = list(map(int, input().split()))
res = []
s.sort()
func(1)