import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    arr = []
    for _ in range(9):
        arr.append(int(r().rstrip()))
    arr.sort()
    
    for i in range(8):
        for j in range(i+1, 9):
            if sum(arr) - arr[i] - arr[j] == 100:
                spy1 = arr[i]
                spy2 = arr[j]
    arr.remove(spy1)
    arr.remove(spy2)
    
    for v in arr:
        print(v)
        
solution()