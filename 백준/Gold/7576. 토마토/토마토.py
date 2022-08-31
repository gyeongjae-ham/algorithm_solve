import sys
from collections import deque
input = sys.stdin.readline

m, n = map(int, input().split())
queue = deque()
graph = []

for _ in range(n):
    graph.append(list(map(int, input().split())))

for i in range(n):
    for j in range(m):
        if graph[i][j] == 1:
            queue.append((i,j))

def bfs():
    dx = [-1,0,1,0]
    dy = [0,-1,0,1]
    while queue:
        x,y = queue.popleft()
        for i in range(4):
            nx = x+dx[i]
            ny = y+dy[i]
            if 0<=nx<n and 0<=ny<m:
                if graph[nx][ny] == -1:
                    continue
                if graph[nx][ny] == 0:
                    queue.append((nx,ny))
                    graph[nx][ny] = graph[x][y]+1

bfs()
answ = 0
for i in graph:
    for j in i:
        if j==0:
            print(-1)
            exit(0)
    answ = max(answ,max(i))

print(answ-1)