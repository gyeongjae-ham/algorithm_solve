import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    n, m, x, y, k = map(int, fi().split())
    maps = [list(map(int, fi().split())) for _ in range(n)]
    cmds = list(map(int, fi().split()))
    dx = [0, 0, -1, 1]
    dy = [1, -1, 0, 0]
    dice = [0] * 6

    for dr in cmds:
        nx = x + dx[dr - 1]
        ny = y + dy[dr - 1]

        if not (0<=nx<n and 0<=ny<m): continue
        e, w, s, no, u, d = dice[0], dice[1], dice[2], dice[3], dice[4], dice[5]

        # 동
        if dr == 1:
            dice[0], dice[1], dice[4], dice[5] = d, u, e, w
        # 서
        elif dr == 2:
            dice[0], dice[1], dice[4], dice[5] = u, d, w, e
        # 북
        elif dr == 3:
            dice[2], dice[3], dice[4], dice[5] = u, d, no, s
        # 남
        elif dr == 4:
            dice[2], dice[3], dice[4], dice[5] = d, u, s, no
        
        if maps[nx][ny] == 0:
            maps[nx][ny] = dice[5]
        else:
            dice[5] = maps[nx][ny]
            maps[nx][ny] = 0
            
        x, y = nx, ny
        print(dice[4])
        
if __name__ == "__main__":
    solution()