import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    arr = list(map(int, fi().split()))
    # print(*arr, end=" ")
    d = [arr[0]]
    
    for i in range(1, n):
        # 더 큰 수가 될때만 더하기
        d.append(max(d[-1]+arr[i], arr[i]))
        
    print(max(d))
    
if __name__ == '__main__':
    solution()