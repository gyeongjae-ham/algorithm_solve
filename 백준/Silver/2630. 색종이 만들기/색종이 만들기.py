import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, cnt, gr
    n = int(fi().rstrip())
    gr = [list(map(int, fi().split())) for _ in range(n)]
    cnt = [0] * 2
    
    solve(0, 0, n)
    for i in range(2): print(cnt[i])

def solve(x, y, z):
    if check(x, y, z) == True:
        cnt[gr[x][y]] += 1
        return
    
    N = z // 2
    for i in range(2):
        for j in range(2):
            solve(x + (N * i), y + (N * j), N)
            
def check(x, y, n):
    for i in range(x, x+n):
        for j in range(y, y+n):
            if gr[x][y] != gr[i][j]:
                return False
    return True
    
if __name__ == '__main__':
    solution()