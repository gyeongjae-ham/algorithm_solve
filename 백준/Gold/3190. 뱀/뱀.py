import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    # 아래, 오른, 위, 왼
    dx = [1, 0, -1, 0]
    dy = [0, 1, 0, -1]
    
    n = int(fi().rstrip())
    ac = int(fi().rstrip())
    gr = [[0]*105 for _ in range(105)]
    # 사과 위치 입력
    for i in range(ac):
        x, y = map(int, fi().split())
        gr[x][y] = 2
    
    # 방향 정보 담기
    dc = int(fi().rstrip())
    dq = {}
    for i in range(dc):
        sec, dr = fi().split()
        dq[int(sec)] = dr
    
    # 뱀 위치들 저장
    sq = deque()
    sq.appendleft((1, 1))
    d = 1 # 처음에 오른쪽으로
    
    ans = 0
    # 다음 갈 위치 저장
    q = deque()
    q.append((1, 1))
    while True:
        d %= 4
        x, y = q.popleft()
        gr[x][y] = 1
        ans += 1

        nx = x + dx[d]
        ny = y + dy[d]
        # 범위
        if nx < 1 or nx > n or ny < 1 or ny > n: break
        # 뱀 몸통 만났을 때
        if gr[nx][ny] == 1: break
        
        # 사과를 못 먹을 때 뱀 위치 이동
        if gr[nx][ny] != 2:
            # 맨 뒤가 꼬리
            a,b = sq.pop()
            gr[a][b] = 0
        
        q.append((nx, ny))
        sq.appendleft((nx, ny))
        
        # 해당 시간초만큼의 정보가 있으면 방향 변경
        if ans in dq.keys():
            if dq[ans] == 'L': d += 1
            elif dq[ans] == 'D': d += 3
    
    print(ans)

if __name__ == "__main__":
    solution()