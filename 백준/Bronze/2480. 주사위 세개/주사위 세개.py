import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    a,b,c = map(int, r().split())
    if a==b==c: print(10000 + a * 1000)
    elif a==b and a!=c: print(1000 + a * 100)
    elif a==c and a!=b: print(1000 + a * 100)
    elif b==c and b!=a: print(1000 + b * 100)
    else:
        if a>b and a>c: print(a*100)
        elif b>a and b>c: print(b*100)
        else: print(c*100)
    
solution()