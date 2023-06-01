import sys
from collections import deque
fi = sys.stdin.readline
#sys.setrecursionlimit(10**6)
                
def solution():
    global dx, dy, gr, maxV, n, m
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    n, m = map(int, fi().split())
    gr = [list(map(int, fi().split())) for _ in range(n)]
    # print(*gr, sep="\n")
    maxV = -(sys.maxsize + 1)
    
    # 벽을 세개 세워야 한다
    buildWall(0)
    
    # 출력
    print(maxV)
    
def bfs():
    global maxV
    t_gr = [arr[:] for arr in gr]
    q = deque()
    
    for i in range(n):
        for j in range(m):
            if t_gr[i][j] == 2:
                q.append((i, j))
                
    while q:
        x, y = q.popleft()
        for d in range(4):
            nx = x + dx[d]
            ny = y + dy[d]
            
            if not (0<=nx<n and 0<=ny<m): continue
            if t_gr[nx][ny] == 0:
                t_gr[nx][ny] = 2
                q.append((nx, ny))
                
    # 안전지대 개수를 maxV에 비교하고 저장한다
    cnt = 0
    for v in t_gr:
        cnt += v.count(0)
        
    maxV = max(maxV, cnt)
        
def buildWall(cnt):
    # 벽을 세개 세운 후 바이러스를 퍼뜨린다        
    if cnt == 3:
        bfs()
        return
                
    for i in range(n):
        for j in range(m):
            if gr[i][j] == 0:
                gr[i][j] = 1
                buildWall(cnt+1)
                gr[i][j] = 0
    
    
if __name__ == "__main__":
    solution()