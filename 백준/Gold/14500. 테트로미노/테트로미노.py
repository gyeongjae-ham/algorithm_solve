import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    global n, m, gr, vis, maxV, dx, dy
    
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    
    n, m = map(int, fi().split())
    gr = [list(map(int, fi().split())) for _ in range(n)]
    vis = [[0]*500 for _ in range(500)]
    
    maxV = 0
    for i in range(n):
        for j in range(m):
            vis[i][j] = 1
            dfs(i, j, 1, gr[i][j])
            maxV = max(maxV, fShape(i, j))
            vis[i][j] = 0
    print(maxV)
            
def dfs(x, y, cnt, sumV):
    global maxV
    if cnt == 4:
        maxV = max(maxV, sumV)
        return
    
    for d in range(4):
        nx = x + dx[d]
        ny = y + dy[d]
        
        if 0<=nx<n and 0<=ny<m and not vis[nx][ny]:
            vis[nx][ny] = 1
            dfs(nx, ny, cnt+1, sumV+gr[nx][ny])
            vis[nx][ny] = 0
            
def fShape(x, y):
    
    base = gr[x][y]
    minV = sys.maxsize
    cnt = 0
    
    for d in range(4):
        nx = x + dx[d]
        ny = y + dy[d]
        if 0<=nx<n and 0<=ny<m:
            cnt += 1
            base += gr[nx][ny]
            minV = min(minV, gr[nx][ny])
            
    if cnt == 4: return base - minV
    elif cnt == 3: return base
    else: return -1
    
if __name__ == "__main__":
    solution()