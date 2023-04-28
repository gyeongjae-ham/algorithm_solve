import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    for i in range(n):
        print('*'*(i+1))
        
solution()