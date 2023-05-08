import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, gr
    n = int(fi().rstrip())
    gr = [list(map(int, list(fi().rstrip()))) for _ in range(n)]
    
    solve(0, 0, n)

def solve(x, y, n):
    # n이 1이면 가장 작은 범위니까 그대로 출력
    if n == 1: 
        print(gr[x][y], end="")
        return
    
    zero = True
    one = True
    for i in range(x, x+n):
        for j in range(y, y+n):
            # 이 영역이 1인지 0인지 확인하기
            if gr[i][j] == 1:
                zero = False
            else:
                one = False
    
    if zero == True: print(0, end="")
    elif one == True: print(1, end="")
    else:
        print("(", end="")
        # 순서대로 1, 2, 3, 4분면
        solve(x, y, n//2)
        solve(x, y+n//2, n//2)
        solve(x+n//2, y, n//2)
        solve(x+n//2, y+n//2, n//2)
        print(")", end="")
    return
    
                
if __name__ == '__main__':
    solution()