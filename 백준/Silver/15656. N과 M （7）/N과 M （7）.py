import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, m, arr, res
    n, m = map(int, fi().split())
    arr = list(map(int, fi().split()))
    res = [0 for _ in range(n)]
    arr.sort()
    
    func(0)

def func(k):
    if k == m:
        for i in range(m):
            print(res[i], end=" ")
        print()
        return
    
    for v in arr:
        res[k] = v
        func(k + 1)
                
if __name__ == '__main__':
    solution()