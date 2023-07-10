import sys
fi = sys.stdin.readline
                
def solution():
    n, k = map(int, fi().split())
    arr = [int(fi().rstrip()) for _ in range(n)]
    # print(*arr, sep=" ")
    arr.sort(reverse=True)
    
    ans = 0
    for c in arr:
        ans += k // c
        k %= c
    
    print(ans)
    
if __name__ == '__main__':
    solution()