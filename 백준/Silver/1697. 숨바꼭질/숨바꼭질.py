import sys
from collections import *
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n, k = map(int, fi().split())
    gr = [-1 for _ in range(100002)]
    
    q = deque()
    gr[n] = 0
    q.append(n)
    
    while gr[k] == -1:
        x = q.popleft()
        for nx in [x+1, x-1, 2*x]:
            if not (0 <= nx <= 100000): continue
            if gr[nx] != -1: continue
            gr[nx] = gr[x] + 1
            q.append(nx)
    
    print(gr[k])
    
solution()