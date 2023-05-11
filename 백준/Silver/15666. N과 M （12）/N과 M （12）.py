import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)

def solution():
    global n, m, arr, num
    n, m = map(int, fi().split())
    arr = [0 for _ in range(n)]
    num = list(map(int, fi().split()))
    num.sort()
    
    func(0, 0)

def func(k, st):
    if k == m:
        for i in range(m):
            print(arr[i], end=" ")
        print()
        return
    
    tmp = 0
    for i in range(st, n):
        if tmp != num[i]:
            arr[k] = num[i]
            tmp = arr[k]
            func(k + 1, i)
                
if __name__ == '__main__':
    solution()