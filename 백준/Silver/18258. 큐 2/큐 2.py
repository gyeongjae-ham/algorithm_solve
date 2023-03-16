import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    Q = deque()

    n = int(r().rstrip())
    for _ in range(n):
        ol = r().split()
        if ol[0] == 'push':
            Q.append(ol[1])
        elif ol[0]=='pop':
            if Q: print(Q.popleft())
            else: print(-1)
        elif ol[0]=='size':
            print(len(Q))
        elif ol[0]=='empty':
            if Q: print(0)
            else: print(1)
        elif ol[0]=='front':
            if Q: print(Q[0])
            else: print(-1)
        elif ol[0]=='back':
            if Q: print(Q[-1])
            else: print(-1)
                
solution()