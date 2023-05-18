import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)

def merge(st, en):
    global arr, tmp
    mid = (st + en) // 2
    lidx = st
    ridx = mid
    for i in range(st, en):
        if ridx == en:
            tmp[i] = arr[lidx]
            lidx += 1
        elif lidx == mid:
            tmp[i] = arr[ridx]
            ridx += 1
        elif arr[lidx] <= arr[ridx]:
            tmp[i] = arr[ridx]
            ridx += 1
        else:
            tmp[i] = arr[lidx]
            lidx += 1
    
    for i in range(st, en):
        arr[i] = tmp[i]
    
def merge_sort(st, en):
    # 배열의 크기가 1일 때 return
    if en == st + 1: return
    mid = (st + en) // 2
    merge_sort(st, mid)
    merge_sort(mid, en)
    merge(st, en)
    
def solution():
    global arr, tmp
    n = int(fi().rstrip())
    arr = []
    tmp = [0] * n
    for i in range(n):
        arr.append(int(fi().rstrip()))
        
    merge_sort(0, n)
    for i in range(n):
        print(arr[i])
    
        
if __name__ == '__main__':
    solution()