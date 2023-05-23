import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def rotate_right(x, d):
    # 톱니 바퀴 범위를 넘어서거나, 맞닿은 극이 같으면 return
    if x > 4 or board[x - 1][2] == board[x][6]: return

    if board[x - 1][2] != board[x][6]:
        rotate_right(x + 1, -d)
        board[x].rotate(d)
        
def rotate_left(x, d):
    # 톱니 바퀴 범위를 넘어서거나, 맞닿은 극이 같으면 return
    if x < 1 or board[x][2] == board[x + 1][6]: return

    if board[x][2] != board[x + 1][6]:
        rotate_left(x - 1, -d)
        board[x].rotate(d)

    
def solution():
    global board
    board = {}
    for i in range(1, 5):
        # 돌리기 쉬우려고 deque을 사용했다
        # 이전 풀이에서 list로 돌리는 것보다 깔끔하다 흠 고려해봐야겠다
        board[i] = deque(map(int, fi().rstrip()))
    
    k = int(fi().rstrip())
    for _ in range(k):
        x, d = map(int, fi().split())
        
        rotate_right(x + 1, -d)
        rotate_left(x - 1, -d)
        board[x].rotate(d)
    
    ans = 0
    for i in range(4):
        if board[i+1][0] == 1:
            ans += (1<<i)
        
    print(ans)
                
if __name__ == "__main__":
    solution()