import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)

def solution():
    global n, m, arr, num, isused
    n, m = map(int, fi().split())
    arr = [0 for _ in range(n)]
    num = list(map(int, fi().split()))
    num.sort()
    isused = [False for _ in range(10000)]
    
    func(0)

def func(k):
    if k == m:
        for i in range(m):
            print(arr[i], end=" ")
        print()
        return
    
    tmp = 0
    for i in range(n):
        if not isused[i] and tmp != num[i] and num[i] >= arr[k-1]:
            arr[k] = num[i]
            tmp = arr[k]
            isused[i] = True
            func(k + 1)
            isused[i] = False
                
if __name__ == '__main__':
    solution()