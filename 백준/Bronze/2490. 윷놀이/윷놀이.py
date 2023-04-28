import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    arr = ['D', 'C', 'B', 'A', 'E']
    for _ in range(3):
        tmp = list(map(int, r().split()))
        print(arr[sum(tmp)])
        
solution()