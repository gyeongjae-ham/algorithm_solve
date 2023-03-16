import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    while True:
        hl = list(map(int, r().split()))
        n = hl.pop(0)
        
        if not n: break
        S = []
        ans = 0
        
        for i in range(n):
            idx  = i
            while S and S[-1][0] >= hl[i]:
                ans = max(ans, (i-S[-1][1])*S[-1][0])
                idx = S[-1][1]
                S.pop()
            S.append((hl[i], idx))
            
        while S:
            ans = max(ans, (n-S[-1][1])*S[-1][0])
            S.pop()
        print(ans)
    
solution()