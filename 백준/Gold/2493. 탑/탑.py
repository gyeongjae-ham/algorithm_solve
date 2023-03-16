import sys
r = sys.stdin.readline().rstrip()
rs = sys.stdin.readline().split()
sys.setrecursionlimit(10**6)

def solution():
    n = int(r)
    tops = list(map(int, rs))
    S = []
    res = [0]*n
    
    for i in range(n):
        while S and S[-1][0] < tops[i]:
            S.pop()
        if S:
            res[i] = S[-1][1]+1
        S.append((tops[i], i))
    
    print(*res)
    
solution()