import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    arr = list(map(int, r().split()))
    arr.sort()
    print(*arr)
    
solution()