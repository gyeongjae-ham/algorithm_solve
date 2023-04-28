import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    arr = [i+1 for i in range(20)]
    for _ in range(10):
        a,b = map(int, r().split())
        x = arr[:a-1]
        y = arr[a-1:b][::-1]
        z = arr[b:]
        arr = x+y+z

    print(*arr)
        
solution()