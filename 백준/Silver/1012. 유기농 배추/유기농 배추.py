import sys
from collections import *
import bisect
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def solution():
    global m, n, k, gr
    t = int(fi().rstrip())
    
    for _ in range(t):
        # 입력값 초기화
        m, n, k = map(int, fi().split())
        gr = [[0]*m for _ in range(n)]
        # 배추 위치 초기화
        for i in range(k):
            y, x = map(int, fi().split())
            gr[x][y] = 1
    
        cnt = 0
        for i in range(n):
            for j in range(m):
                if gr[i][j] == 1:
                    cnt += 1
                    bfs(i, j)
    
        print(cnt)
                

def bfs(x, y):
    q = deque()
    q.append((x, y))
    gr[x][y] = 0
    
    while q:
        cur = q.popleft()
        for d in range(4):
            nx = cur[0] + dx[d]
            ny = cur[1] + dy[d]
            
            if not (0 <= nx < n and 0 <= ny < m): continue
            if gr[nx][ny] == 0: continue
            
            q.append((nx, ny))
            gr[nx][ny] = 0
    
if __name__ == "__main__":
    solution()