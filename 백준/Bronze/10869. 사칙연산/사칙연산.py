import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    a,b = map(int, r().split())

    print(a+b)
    print(a-b)
    print(a*b)
    print(a//b)
    print(a%b)
    
solution()