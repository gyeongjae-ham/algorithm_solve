import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def func():
    if len(s)==m:
        print(' '.join(map(str,s)))
        return
    
    for i in range(1, n+1):
        s.append(i)
        func()
        s.pop()

n,m = map(int, input().split())
s = []
func()