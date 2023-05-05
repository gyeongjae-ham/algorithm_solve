import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(fi().rstrip())
    
    print((1<<n) - 1)
    recur(1, 3, n)
    
def recur(a, b, m):
    if m == 1:
        print(a,b)
        return
    
    recur(a, 6-a-b, m-1)
    print(a,b)
    recur(6-a-b, b, m-1)
    
if __name__ == '__main__':
    solution()