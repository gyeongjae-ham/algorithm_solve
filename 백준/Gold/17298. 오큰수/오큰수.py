import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    nums = list(map(int, r().split()))
    nums.reverse()
    S = []
    res = []
    
    for i in nums:
        while S and S[-1] <= i: S.pop()
        if not S: res.append(-1)
        else: res.append(S[-1])
        S.append(i)

    print(*reversed(res))
    
solution()