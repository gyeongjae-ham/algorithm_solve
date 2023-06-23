import sys
fi = sys.stdin.readline
                
def solution():
    d = [[0]*3 for _ in range(1005)]
    r = [0] * 1005
    g = [0] * 1005
    b = [0] * 1005
    
    n = int(fi().rstrip())
    # 빨, 초, 파 값들을 입력 받아주고
    for i in range(1, n+1):
        rv, gv, bv = map(int, fi().split())
        r[i] = rv
        g[i] = gv
        b[i] = bv
    
    # 초기값 설정 첫번째 집이 빨, 초, 파일 경우 초기값 설정
    d[1][0] = r[1]
    d[1][1] = g[1]
    d[1][2] = b[1]
    
    # 두번째 집부터 값 채워주기
    for i in range(2, n+1):
        # d[i]가 빨강이면 이전 집은 초록이나 파랑 중 min 값
        d[i][0] = min(d[i-1][1], d[i-1][2]) + r[i]
        d[i][1] = min(d[i-1][0], d[i-1][2]) + g[i]
        d[i][2] = min(d[i-1][0], d[i-1][1]) + b[i]
        
    print(min(d[n][0], d[n][1], d[n][2]))
    
if __name__ == '__main__':
    
    solution()