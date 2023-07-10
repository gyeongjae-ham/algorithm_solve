import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    arr = list(map(int, fi().split()))
    arr.sort()
    
    ans = 0
    for i in range(1, n):
        arr[i] = arr[i-1] + arr[i]
        ans += arr[i]
        
    print(ans + arr[0])
    
if __name__ == '__main__':
    solution()