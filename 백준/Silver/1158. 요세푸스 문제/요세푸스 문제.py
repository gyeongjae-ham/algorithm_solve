import sys
from collections import deque

fi = sys.stdin.readline
                
def solution():
    n, k = map(int, fi().split())
    nms = [i for i in range(1, n+1)]
    dq = deque(nms)
    
    res = []
    while n > 0:
        for i in range(k-1):
            dq.append(dq.popleft())
        res.append(dq.popleft())
        n = n - 1
    print('<', end='')
    print(*res, end='', sep=', ')
    print('>')
        
if __name__ == '__main__':
    solution()