import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n,m = map(int, r().split())
    tg = list(map(int, r().split()))
    q = deque([i for i in range(1, n+1)])
    
    cnt = 0
    for p in tg:
        while True:
            if q[0] == p:
                q.popleft()
                break
            else:
                if q.index(p) < len(q)/2:
                    while q[0] != p:
                        q.append(q.popleft())  
                        cnt += 1
                else:
                    while q[0] != p:
                        q.appendleft(q.pop())  
                        cnt += 1
    print(cnt)
    
solution()