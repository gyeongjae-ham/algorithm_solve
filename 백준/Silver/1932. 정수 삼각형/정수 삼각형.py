import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    gr = []
    
    # 행별로 입력 받아주기
    for i in range(n):
        gr.append(list(map(int, fi().split())))
    
    # 행(시작은 두번째부터 첫 행은 값 고정이므로)
    for i in range(1, n):
       # 열
        for j in range(0, i+1):
            # 열에서 맨 왼쪽이면 이전 행의 맨 왼쪽밖에 없으므로 그 값을 더해준다
            if j == 0:
                gr[i][0] += gr[i-1][0]
            # 이번 열의 위치가 맨 오른쪽이면 이전 행의 맨 마지막 값을 더해준다
            elif j == i:
                gr[i][j] += gr[i-1][j-1]
            # 나머지는 대각선 두 값 중 더 큰 경우를 더해준다
            else:
                gr[i][j] += max(gr[i-1][j-1], gr[i-1][j])
    
    # 디버깅용
    # for i in range(len(gr)):
    #     print(*gr[i])
    
    # 그 행에서 가장 큰 값인 경우 출력
    print(max(gr[n-1]))

if __name__ == '__main__':
    solution()