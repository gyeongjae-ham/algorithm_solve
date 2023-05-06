import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n,r,c = map(int, fi().split())
    
    print(recur(n, r, c))
    
def recur(n, r, c):
    if n == 0: return 0
    half = 1 << (n-1)
    
    if r < half and c < half: return recur(n-1, r, c)
    if r < half and c >= half: return half*half + recur(n-1, r, c-half)
    if r >= half and c < half: return 2*half*half + recur(n-1, r-half, c)
    return 3*half*half + recur(n-1, r-half, c-half)
    
if __name__ == '__main__':
    solution()