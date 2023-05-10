import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, m, arr, isused
    n, m = map(int, fi().split())
    arr = [0 for _ in range(10)]
    isused = [False for _ in range(10)]
    
    func(0)

def func(k):
    if k == m:
        for i in range(m):
            print(arr[i], end=" ")
        print()
        return
    
    # cur이 0일 때는 1부터 시작
    st = 1
    # cur이 0이 아니라면(이미 뽑은 숫자가 있으면 시작점이 그 숫자보다 큰 상태에서 시작하도록)
    if k != 0: st = arr[k-1] + 1
    for i in range(st, n+1):
        if not isused[i]:
            arr[k] = i
            isused[i] = 1
            func(k + 1)
            isused[i] = 0
            
                
if __name__ == '__main__':
    solution()