import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    for i in range(1, n+1):
        print(' '*(n-i) + '*'*(i*2-1))
solution()