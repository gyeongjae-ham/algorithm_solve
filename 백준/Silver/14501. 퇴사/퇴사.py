import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    arr = [list(map(int, fi().split())) for _ in range(n)]
    d = [0 for _ in range(n+1)]
    # print(*arr, end=" ")
    # print()
    
    for i in range(n-1, -1, -1):
        # i일 상담일자가 퇴사일을 넘어가면 상담을 안한다
        if i + arr[i][0] > n:
            d[i] = d[i+1] # 그냥 다음날 값을 넣어준다
        else:
            # i일에 상담하는 것과 안하는 것 중에서 더 큰 것을 선택
            d[i] = max(d[i+1], arr[i][1] + d[i + arr[i][0]])
    
    # print(*d, end=" ")
    print(d[0])
    
if __name__ == '__main__':
    solution()