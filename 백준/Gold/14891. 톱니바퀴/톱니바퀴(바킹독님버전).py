import sys
from collections import deque

fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def go(x, d):
    dirs = [0] * 4
    # 해당 톱니바퀴의 회전 방향을 기록하는 리스트
    dirs[x] = d
    
    # 왼쪽으로 회전을 전파하기
    idx = x
    # 톱니바퀴 왼쪽 끝까지, 현재 톱니바퀴 왼쪽 날개와 왼쪽 톱니바퀴 오른쪽부분의 극이 다르면 회전방향 반대로 저장
    while idx > 0 and board[idx][6] != board[idx-1][2]:
        dirs[idx-1] = -dirs[idx]
        idx -= 1
    
    # 오른쪽으로 회전을 전파하기
    idx = x
    # 톱니바퀴 오른쪽 끝까지, 현재 톱니바퀴 오른쪽 날개와 오른쪽 톱니바퀴 왼쪽부분의 극이 다르면 회전방향 반대로 저장
    while idx < 3 and board[idx][2] != board[idx+1][6]:
        dirs[idx+1] = -dirs[idx]
        idx += 1
    
    # 각 톱니바퀴의 회전방향대로 돌려주기
    for i in range(4):
        if dirs[i] == -1:
            tmp = board[i][:]
            board[i] = tmp[1:]
            board[i].append(tmp[0])
        if dirs[i] == 1:
            tmp = board[i][:]
            board[i] = tmp[:-1]
            board[i].insert(0, tmp[-1])
    
def solution():
    global board
    board = [list(map(int, fi().rstrip())) for _ in range(4)]
    k = int(fi().rstrip())
        
    while k > 0:
        x, d = map(int, fi().split())
        go(x-1, d)
        k -= 1
    
    ans = 0
    for i in range(4):
        if board[i][0] == 1:
            ans += (1<<i)
    print(ans)
                
if __name__ == "__main__":
    solution()