import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    S = []
    res = 0

    while n > 0:
        h = int(r().rstrip())
        while S and S[-1] <= h: S.pop()
        res += len(S)
        S.append(h)
        n-=1
        
    print(res)
    
solution()