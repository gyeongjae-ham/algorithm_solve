import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    Q = deque()
    n = int(r().rstrip())
    for i in range(1, n+1): Q.append(i)
    while len(Q) > 1:
        Q.popleft()
        Q.append(Q.popleft())
    print(Q[0])
                
solution()