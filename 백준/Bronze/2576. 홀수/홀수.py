import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    arr = []
    for _ in range(7):
        num = int(r().rstrip())
        if num % 2 != 0: arr.append(num)
    
    if len(arr) != 0:
        arr.sort()
        print(sum(arr))
        print(arr[0])
    else: print(-1)
        
solution()