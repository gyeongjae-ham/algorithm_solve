import sys
from collections import *
import bisect
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def solution():
    global n, gr, vis
    n = int(fi().rstrip())
    gr = [list(fi().rstrip()) for _ in range(n)]
    vis = [[0]*n for _ in range(n)]

    fv = area()
    # 방문 기록 다시 초기화
    vis = [[0]*n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            if gr[i][j] == 'G':
                gr[i][j] = 'R'
    
    bv = area()
    
    print(fv, bv)
    

def bfs(x, y):
    q = deque()
    q.append((x, y))
    vis[x][y] = 1
    
    while q:
        f, b = q.pop()
        for d in range(4):
            nx = f + dx[d]
            ny = b + dy[d]
            
            if not (0<=nx<n and 0<=ny<n): continue
            if vis[nx][ny] == 1 or gr[nx][ny] != gr[f][b]: continue
            
            vis[nx][ny] = 1
            q.append((nx, ny))

def area():
    cnt = 0
    for i in range(n):
        for j in range(n):
            if(vis[i][j]==0):
                bfs(i, j)
                cnt += 1
    
    return cnt
    
if __name__ == "__main__":
    solution()