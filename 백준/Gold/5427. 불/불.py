import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    # 테스트 케이스 수
    T = int(fi().rstrip())
    
    while T:
        # 입력값 초기화
        w, h = map(int, fi().split())
        gr = [list(fi().rstrip()) for _ in range(h)]
        
        # 결과 변수
        esc = False
        # 방문 기록 
        fv = [[0]*w for _ in range(h)]
        sv = [[0]*w for _ in range(h)]
        
        # 큐
        fq = deque()
        sq = deque()
        
        for i in range(h):
            for j in range(w):
                if gr[i][j] == '*':
                    fq.append((i, j))
                    fv[i][j] = 1
                if gr[i][j] == '@':
                    sq.append((i, j))
                    sv[i][j] = 1
                    
        while fq:
            fx, fy = fq.popleft()
            for d in range(4):
                fnx = fx + dx[d]
                fny = fy + dy[d]
                
                if not (0 <= fnx < h and 0 <= fny < w): continue
                if (fv[fnx][fny] >= 1 or gr[fnx][fny] == '#'): continue
                
                fv[fnx][fny] = fv[fx][fy] + 1
                fq.append((fnx, fny))
        
        while sq and esc == False:
            sx, sy = sq.popleft()
            for d in range(4):
                snx = sx + dx[d]
                sny = sy + dy[d]
                
                if not (0 <= snx < h and 0 <= sny < w):
                    print(sv[sx][sy])
                    esc = True
                    break
                
                if (sv[snx][sny] >= 1 or gr[snx][sny] == '#'): continue
                if (fv[snx][sny] != 0 and fv[snx][sny] <= sv[sx][sy] + 1): continue
                
                sv[snx][sny] = sv[sx][sy] + 1
                sq.append((snx, sny))
        
        if not esc: print("IMPOSSIBLE")
        
        T -= 1

if __name__ == '__main__':
    solution()