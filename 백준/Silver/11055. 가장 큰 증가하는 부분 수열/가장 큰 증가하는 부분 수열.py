import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    arr = list(map(int, fi().split()))
    # print(n)
    # print(*arr, end=" ")
    d = [0] * n
    d[0] = arr[0]
    
    for i in range(1, n):
        # i까지 돌면서 증가수열 부분 찾기
        for j in range(i):
            # 증가수열일 경우
            if arr[j] < arr[i]:
                # 기존 값이랑, 이전값에 증가수열 값을 더한 값 중에 비교
                d[i] = max(d[i], d[j] + arr[i])
            else:
                d[i] = max(d[i], arr[i])
        
    print(max(d))
    
if __name__ == '__main__':
    solution()