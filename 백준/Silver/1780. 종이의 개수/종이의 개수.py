import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, cnt, gr
    # 입력값 받기
    n = int(fi().rstrip())
    gr = [list(map(int, fi().split())) for _ in range(n)]
    cnt = [0] * 3
    
    solve(0, 0, n)
    for i in range(3): print(cnt[i])

def solve(x, y, z):
    # 종이 내 숫자가 다 같으면 cnt 늘려주기
    if check(x, y, z) == True:
        # 1 더해주는 건 -1일 때를 표현하기 쉽게 하려고 다 1씩 더해주는 거
        cnt[gr[x][y] + 1] += 1
        return
    
    # 종이 내 숫자가 다 같지 않았다면 3등분해서 또 확인하기 위해서
    # 3등분하기
    N = z // 3
    for i in range(3):
        for j in range(3):
            # 이중 배열을 돌면서 9등분된 모든 범위를 찾아보기
            solve(x + (N * i), y + (N * j), N)
            
def check(x, y, n):
    for i in range(x, x+n):
        for j in range(y, y+n):
            # 같은 숫자인지 확인
            if gr[x][y] != gr[i][j]:
                return False
    return True
    
if __name__ == '__main__':
    solution()