import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global dx, dy, n, m, f_vis, j_vis, gr, fq, jq
    
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    n, m = map(int, r().split())
    f_vis = [[0]*m for _ in range(n)]
    j_vis = [[0]*m for _ in range(n)]
    gr = [list(r().strip()) for _ in range(n)]
    fq = deque()
    jq = deque()

    for i in range(n):
        for j in range(m):
            if gr[i][j] == 'F':
                fq.append((i, j))
                f_vis[i][j] = 1
            elif gr[i][j] == 'J':
                jq.append((i, j))
                j_vis[i][j] = 1
                
    fire_bfs()
    j_bfs()
    
def fire_bfs():
    while fq:
        x, y = fq.popleft()
        for d in range(4):
            nx = x + dx[d]
            ny = y + dy[d]
            if not (0 <= nx < n and 0 <= ny < m): continue
            if gr[nx][ny] == '#' or f_vis[nx][ny]: continue
            f_vis[nx][ny] = f_vis[x][y] + 1
            fq.append((nx,ny))

def j_bfs():
    while jq:
        x, y = jq.popleft()
        for d in range(4):
            nx = x + dx[d]
            ny = y + dy[d]
        
            if not (0 <= nx < n and 0 <= ny < m):
                print(j_vis[x][y])
                return
            if j_vis[nx][ny] or gr[nx][ny] == '#': continue
            if f_vis[nx][ny] and j_vis[x][y] + 1 >= f_vis[nx][ny]: continue
            
            j_vis[nx][ny] = j_vis[x][y] + 1
            jq.append((nx, ny))
        
    print("IMPOSSIBLE")
    return
    
solution()