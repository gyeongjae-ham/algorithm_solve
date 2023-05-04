import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    dx = [1, -1, 0, 0, 0, 0]
    dy = [0, 0, 1, -1, 0, 0]
    dz = [0, 0, 0, 0, 1, -1]
    
    # 입출력
    m, n, h = map(int, fi().split())
    gr = [[list(map(int, fi().split())) for _ in range(n)] for _ in range(h)]
    
    q = deque()
    
    for d in range(h):
        for i in range(n):
            for j in range(m):
                if gr[d][i][j] == 1:
                    q.append((d, i, j))
                
    while q:
        z, x, y = q.popleft()
        for d in range(6):
            nx = x + dx[d]
            ny = y + dy[d]
            nz = z + dz[d]
            
            if 0<=nx<n and 0<=ny<m and 0<=nz<h and gr[nz][nx][ny] == 0:
                q.append((nz, nx, ny))
                gr[nz][nx][ny] = gr[z][x][y] + 1
    
    
    ans = 0
    for d in range(h):
        for i in range(n):
            for j in range(m):
                if gr[d][i][j] == 0:
                    print(-1)
                    quit()
                else: ans = max(ans, gr[d][i][j])
            
    print(ans - 1)

if __name__ == '__main__':
    solution()