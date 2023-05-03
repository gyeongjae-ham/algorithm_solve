import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    t = int(r().rstrip())
    for _ in range(t):
        a,b = map(int, r().split())
        print(a+b)
        
solution()