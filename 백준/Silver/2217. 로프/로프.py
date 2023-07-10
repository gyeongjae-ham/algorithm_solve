import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    arr = [int(fi().rstrip()) for _ in range(n)]
    arr.sort()
    # print(*arr, sep=" ")
    
    ans = 0
    for i in range(1, n+1):
        ans = max(ans, arr[n-i]*i)
    print(ans)
    
if __name__ == '__main__':
    solution()