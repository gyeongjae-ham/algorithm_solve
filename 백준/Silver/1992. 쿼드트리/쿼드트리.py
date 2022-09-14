import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**8)

N = int(input().rstrip())
board = [list(map(int, input().rstrip())) for _ in range(N)]

def recur(x,y,n):
    check = board[x][y]
    for i in range(x, x+n):
        for j in range(y, y+n):
            if check != board[i][j]:
                check=-1
                break
    
    if check == -1:
        print("(", end='')
        n = n//2
        recur(x,y,n)
        recur(x,y+n,n)
        recur(x+n,y,n)
        recur(x+n,y+n,n)
        print(")",end='')
    elif check == 1:
        print(1, end='')
    else:
        print(0, end='')

recur(0,0,N)