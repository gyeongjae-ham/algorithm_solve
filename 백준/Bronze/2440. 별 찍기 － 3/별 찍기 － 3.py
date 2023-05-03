import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    for i in range(n,0,-1):
        print('*'*i)
solution()