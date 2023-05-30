import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    # 원래 방향인 시계방향으로
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]
    
    n, m = map(int, fi().split())
    r, c, d = map(int, fi().split())
    
    gr = [list(map(int, fi().split())) for _ in range(n)]
    vis = [[0]*m for _ in range(n)]
    
    vis[r][c] = 1
    ans = 1
    
    while True:
        # 네 방향 청소상태
        isClean = False
        for i in range(4):
            d = (d + 3) % 4
            nr = r + dx[d]
            nc = c + dy[d]
            
            if 0<=nr<n and 0<=nc<m and gr[nr][nc] == 0 and vis[nr][nc] == 0:
                vis[nr][nc] = 1
                ans += 1
                # 청소기 위치를 다음 위치로 변경해주고 for문 탈출
                r = nr
                c = nc
                isClean = True
                break
                
        if isClean == False:
            # 네 방향 모두 청소할 수 없을 때
            # 뒤가 벽이면
            if gr[r - dx[d]][c - dy[d]] == 1:
                print(ans)
                break
            else:
                r, c = r-dx[d], c-dy[d]
                
if __name__ == "__main__":
    solution()