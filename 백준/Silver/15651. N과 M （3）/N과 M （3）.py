import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, m, arr, isused
    n, m = map(int, fi().split())
    arr = [0 for _ in range(10)]
    
    func(0)

def func(k):
    if k == m:
        for i in range(m):
            print(arr[i], end=" ")
        print()
        return
    
    for i in range(1, n+1):
        arr[k] = i
        func(k + 1)
                
if __name__ == '__main__':
    solution()