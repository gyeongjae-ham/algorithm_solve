import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, m, arr, isused
    n, m = map(int, fi().split())
    arr = [0] * 10
    isused = [0] * 10
    func(0)
    
def func(k):
    if k == m:
        for i in range(m):
            print(arr[i], end=" ")
        print()
        return
    
    for i in range(1, n+1):
        if isused[i] == 0:
            arr[k] = i
            isused[i] = 1
            func(k + 1)
            isused[i] = 0
                
if __name__ == '__main__':
    solution()