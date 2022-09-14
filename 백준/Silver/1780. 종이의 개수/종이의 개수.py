import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**8)

N = int(input().rstrip())
paper = [list(map(int, input().split())) for _ in range(N)]
cnt = [0,0,0]

def solve(x,y,z):
    for i in range(x,x+z):
        for j in range(y,y+z):
            # 같은 번호가 아니면 나누기
            if paper[x][y]!=paper[i][j]:
                # 나눠서 재귀 돌리기
                for k in range(3):
                    for l in range(3):
                        solve(x+k*z//3, y+l*z//3, z//3)
                return
    # 반복문을 빠져나온건 같은 번호라는 뜻
    cnt[paper[x][y]+1]+=1

solve(0,0,N)
for i in cnt:
    print(i)