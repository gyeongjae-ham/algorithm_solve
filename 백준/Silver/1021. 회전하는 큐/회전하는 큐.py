import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    dq = deque()
    n, k = map(int, r().split())
    
    # put the numbers in deque
    for i in range(1, n+1): dq.append(i)
    fn = list(map(int, r().split()))
    ans = 0

    for i in range(k):
        # find index of target number's
        idx = dq.index(fn[i])
        
        while dq[0] != fn[i]:
            # If idx is smaller than len(dq) - idx, target number is close to front
            # so, do popleft
            if idx < len(dq) - idx:
                dq.append(dq.popleft())
            # the opposite case, do pop
            else:
                dq.appendleft(dq.pop())
            # add answer value
            ans += 1
        
        # After find target number remove it
        dq.popleft()
    print(ans)
                
solution()