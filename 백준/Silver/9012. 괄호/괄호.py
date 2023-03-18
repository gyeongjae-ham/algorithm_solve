import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    while n>0:
        S = []
        string = r().rstrip()
        for c in string:
            if c=='(': S.append(c)
            elif len(S)!=0 and c==')':
                if S[-1] == '(': S.pop()
            else: S.append(c)
        
        if len(S)==0: print('YES')
        else: print('NO')
        n -= 1
        
solution()