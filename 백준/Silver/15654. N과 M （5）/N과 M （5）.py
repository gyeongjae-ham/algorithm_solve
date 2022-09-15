import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def func(start):
    if len(res)==m:
        print(' '.join(map(str,res)))
        return
    
    for i in s:
        if i not in res:
            res.append(i)
            func(i)
            res.pop()

n,m = map(int, input().split())
s = list(map(int, input().split()))
res = []
s.sort()
func(1)