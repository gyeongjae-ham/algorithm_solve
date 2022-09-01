import sys
from collections import deque
input = sys.stdin.readline

def bfs(sx, sy, ax, ay):
    dx = [-1, -2, -2, -1, 1, 2, 2, 1]
    dy = [2, 1, -1, -2, -2, -1, 1, 2]
    queue=deque()
    queue.append((sx, sy))
    visited[sx][sy] = 1
    while queue:
        x,y = queue.popleft()
        if x==ax and y==ay:
            print(visited[ax][ay] -1)
            return
        for i in range(8):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0<=nx<l and 0<=ny<l and visited[nx][ny] == 0:
                queue.append((nx, ny))
                visited[nx][ny] = visited[x][y] + 1

t = int(input().rstrip())
for _ in range(t):
    l = int(input().rstrip())
    sx, sy = map(int, input().split())
    ax, ay = map(int, input().split())
    visited = [[0]*l for _ in range(l)]
    bfs(sx, sy, ax, ay)