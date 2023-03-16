import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    stack = []
    res = 0
    
    for _ in range(n):
        h = int(r().rstrip())
        cnt = 1
        
        while stack and stack[-1][0] <= h:
            height, cnt = stack.pop()
            if height == h:
                res += cnt
                cnt += 1
            elif height < h:
                res += cnt
                cnt = 1
        if stack: res += 1
        stack.append((h, cnt))
    print(res)
    
solution()