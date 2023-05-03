import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    arr = []
    for _ in range(9):
        arr.append(int(r().rstrip()))
    
    print(max(arr))
    print(arr.index(max(arr))+1)
    
solution()