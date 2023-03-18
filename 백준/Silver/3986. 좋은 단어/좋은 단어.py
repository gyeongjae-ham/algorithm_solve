import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    cnt = 0
    while n>0:
        S = []
        string = r().rstrip()
        for c in string:
            if len(S)==0: S.append(c)
            elif len(S)!=0 and S[-1]==c: S.pop()
            else: S.append(c)
        
        if len(S)==0: cnt += 1
        n -= 1
        
    print(cnt)
        
solution()