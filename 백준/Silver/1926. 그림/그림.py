import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def solution():    
    global n, m, a
    n, m = map(int, r().split())
    a = [list(map(int, r().split())) for _ in range(n)]
    cnt = 0
    ans = 0
    for i in range(n):
        for j in range(m):
            if a[i][j] == 1:
                cnt += 1
                ans = max(bfs(i, j), ans)
    print(cnt)
    print(ans)


def bfs(x, y):
    global n, m, a
    a[x][y] = 0    
    w = 1
    q = deque()
    q.append((x, y))
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            if 0 <= nx < n and 0 <= ny < m and a[nx][ny] == 1:
                q.append((nx, ny))
                a[nx][ny] = 0
                w += 1
    return w

solution()