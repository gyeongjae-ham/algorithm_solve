import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    q = deque()
    # 카드 덱 초기화
    for i in range(1, n+1): q.append(i)
    
    # 반복 실행
    while len(q) != 1:
        q.popleft()
        q.append(q.popleft())
    print(q[0])
    
solution()