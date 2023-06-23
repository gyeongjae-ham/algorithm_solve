import sys
fi = sys.stdin.readline
                
def solution():
    d = [0] * 1000002
    # 이 숫자로 가는 가장 최적의 경로를 입력하기 위한 리스트
    pre = [0] * 1000002
    
    n = int(fi().rstrip())
    
    d[1] = 0
    for i in range(2, n+1):
        d[i] = d[i-1] + 1
        # i 값으로 가는 가장 최선의 방법을 입력
        pre[i] = i-1
        
        # i가 2로 나눠지고, 더 최소의 값을 가진다면
        if i % 2 == 0 and d[i] > d[i//2] + 1:
            d[i] = d[i//2] + 1
            pre[i] = i//2
            
        # i가 3로 나눠지고, 더 최소의 값을 가진다면
        if i % 3 == 0 and d[i] > d[i//3] + 1: 
            d[i] = d[i//3] + 1
            pre[i] = i//3
    
    # 최소 횟수를 출력
    print(d[n])
    
    # 경로 시작점
    cur = n
    while True:
        print(cur, end=" ")
        # 경로 끝
        if cur == 1: break
        # 다음 경로로 업데이트
        cur = pre[cur]

if __name__ == '__main__':
    solution()