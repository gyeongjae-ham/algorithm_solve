import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global graph, dx, dy, bomblist, vis
    graph = [list(fi().rstrip()) for _ in range(12)]
    time = 0
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    
    while True:
        vis = [[0] * 6 for _ in range(12)]
        bomblist = []
        
        for i in range(12):
            for j in range(6):
                if graph[i][j] != '.' and graph[i][j] != '_' and not vis[i][j]:
                    check(i, j)
                    vis[i][j] = 1
        
        if len(bomblist) == 0: break
        
        for bomb in bomblist:
            x, y = bomb[0], bomb[1]
            
            for i in range(x, 0, -1):
                graph[i][y] = graph[i-1][y]
            graph[0][y] = '.'
            
        time += 1
        
    print(time)

def check(x, y):
    q = deque()
    q.append((x, y))
    now = graph[x][y]
    pos = []
    
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0<= nx < 12 and 0 <= ny < 6 and graph[nx][ny] == now and not vis[nx][ny]:
                pos.append((nx, ny))
                q.append((nx, ny))
                vis[nx][ny] = 1
    
    if len(pos) >= 4:
        pos.sort(key = lambda x: (x[1], x[0]))
        for i, j in pos:
            graph[i][j] = '_'
            bomblist.append((i, j))
            
if __name__ == "__main__":
    solution()