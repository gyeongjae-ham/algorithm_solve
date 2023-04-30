import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    
    for _ in range(n):
        command = r().rstrip()
        lstk = []
        rstk = []
        for c in command:
            if c == "<":
                if lstk: rstk.append(lstk.pop())
                else: continue
            elif c == ">":
                if rstk: lstk.append(rstk.pop())
                else: continue
            elif c == "-":
                if lstk: lstk.pop()
            else:
                lstk.append(c)
            
        print(''.join(lstk + list(reversed(rstk))))
    
solution()