import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def solution():
    global n, m, gr
    n, m = map(int, r().split())
    gr = [list(map(int, r().rstrip())) for _ in range(n)]
    
    print(bfs(0, 0))

def bfs(x, y):
    q = deque()
    q.append((x, y))
    
    while q:
        x, y = q.popleft()
        for d in range(4):
            nx = x + dx[d]
            ny = y + dy[d]
        
            if 0 <= nx < n and 0 <= ny < m and gr[nx][ny] == 1:
                q.append((nx, ny))
                gr[nx][ny] = gr[x][y] + 1
    return gr[n-1][m-1]

solution()