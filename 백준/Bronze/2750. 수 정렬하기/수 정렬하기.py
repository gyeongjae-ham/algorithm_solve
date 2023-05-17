import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)
    
def solution():
    n = int(fi().rstrip())
    arr = []
    for i in range(n):
        arr.append(int(fi().rstrip()))
    
    for i in range(n-1):
        for j in range(i, n):
            if arr[i] > arr[j]:
                arr[i], arr[j] = arr[j], arr[i]
    
    for v in arr:
        print(v)
            
if __name__ == '__main__':
    solution()