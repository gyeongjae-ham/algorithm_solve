import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    cnt = 0
    for _ in range(n):
        word = r().rstrip()
        q = deque()
        for c in word:
            if not q: q.append(c)
            else:
                if q[-1] == c:
                    q.pop()
                else:
                    q.append(c)
        if len(q)==0: cnt += 1
    
    print(cnt)
    
solution()