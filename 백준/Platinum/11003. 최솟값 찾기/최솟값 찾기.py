import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n, m = map(int, r().split())
    nums = list(map(int, r().split()))
    dq = deque()
    
    for i in range(n):
        # new number is always the biggest number in deque
        # deque.front number is the smallest number in deque
        # so, if new number is smaller than deque.back number do deque.pop_back
        while dq and dq[-1][1] >= nums[i]: dq.pop()
        dq.append((i, nums[i]))
        
        # if dq.front number's index is out of range do d.pop_front
        if dq[0][0] <= i - m: dq.popleft()
        
        print(dq[0][1], end=' ')
        
solution()