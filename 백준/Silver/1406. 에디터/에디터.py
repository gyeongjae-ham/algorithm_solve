import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    lstk = list(map(str, r().strip()))
    rstk = []
    n = int(r().rstrip())
    
    for i in range(n):
        command = r().split()
        if command[0] == "L":
            if lstk: rstk.append(lstk.pop())
            else: continue
        elif command[0] == "D":
            if rstk: lstk.append(rstk.pop())
            else: continue
        elif command[0] == "B":
            if lstk: lstk.pop()
            else: continue
        else: # == "P"
            lstk.append(command[1])
            
    print(''.join(lstk + list(reversed(rstk))))
    
solution()