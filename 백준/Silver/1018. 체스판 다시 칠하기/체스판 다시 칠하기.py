import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

n,m = map(int, input().split())
chess = [list(input().rstrip()) for _ in range(n)]

res = []
for i in range(n-7):
    for j in range(m-7):
        w_cnt, b_cnt = 0, 0
        for k in range(i, i+8):
            for l in range(j, j+8):
                if (k+l)%2==0: 
                    if chess[k][l] != 'W': # 시작이 W 인데 첫 시작이 W가 아닌경우 칠해줘야 하니까 w_cnt를 올려주고
                        w_cnt+=1
                    if chess[k][l] != 'B': # 반대의 경우는 b_cnt를 올려준다
                        b_cnt+=1
                else:
                    if chess[k][l] != 'B': # 시작이 W면 그 다음칸은 B여야 하므로 B가 아닐 시 w_cnt를 올려준다
                        w_cnt+=1
                    if chess[k][l] != 'W': # 반대의 경우
                        b_cnt+=1
        res.append(w_cnt)
        res.append(b_cnt)
        
print(min(res))