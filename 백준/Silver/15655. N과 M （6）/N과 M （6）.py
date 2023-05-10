import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, m, arr, res, isused
    n, m = map(int, fi().split())
    arr = list(map(int, fi().split()))
    res = [0 for _ in range(n)]
    isused = [False for _ in range(10000)]
    arr.sort()
    
    func(0)

def func(k):
    if k == m:
        for i in range(m):
            print(res[i], end=" ")
        print()
        return
    
    for v in arr:
        if not isused[v] and res[k-1] < v:
            res[k] = v
            isused[v] = True
            func(k + 1)
            isused[v] = False
                
if __name__ == '__main__':
    solution()