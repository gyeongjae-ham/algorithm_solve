import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    arr = list(map(int, fi().split()))
    d = [1 for _ in range(n)]
    # print(n)
    # print(*arr, end=" ")
    
    for i in range(1, n):
        for j in range(i):
            if arr[i] > arr[j]:
                d[i] = max(d[i], d[j] + 1)
    
    print(max(d))
    
if __name__ == '__main__':
    solution()