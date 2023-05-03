import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n, x = map(int, r().split())
    arr = list(map(int, r().split()))
    
    for v in arr:
      if x > v:
        print(v, end=" ")
    
solution()