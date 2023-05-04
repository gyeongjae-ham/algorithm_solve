import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    dx = [1, 2, -1, -2, -2, -1, 1, 2]
    dy = [2, 1, 2, 1, -1, -2, -2, -1]
    # 입출력
    T = int(fi().rstrip())
    q = deque()
    
    while T:
        n = int(fi().rstrip())
        x, y = map(int, fi().split())
        px, py = map(int, fi().split())
        
        gr = [[-1] * n for _ in range(n)]
        q.clear()
        
        gr[x][y] = 0
        q.append((x, y))
        
        while q:
            ox, oy = q.popleft()
            for d in range(8):
                nx = ox + dx[d]
                ny = oy + dy[d]
                
                if not (0 <= nx < n and 0 <= ny < n): continue
                if gr[nx][ny] >= 0: continue
                    
                gr[nx][ny] = gr[ox][oy] + 1
                q.append((nx, ny))
        
        print(gr[px][py])
        T -= 1

if __name__ == '__main__':
    solution()