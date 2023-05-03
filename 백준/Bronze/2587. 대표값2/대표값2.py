import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    arr = []
    for _ in range(5):
        arr.append(int(r().rstrip()))
    arr.sort()
    print(sum(arr)//5)
    print(arr[2])
        
solution()