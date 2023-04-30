import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    k = int(r().rstrip())
    stk = []
    for _ in range(k):
        num = int(r().rstrip())
        if num == 0: stk.pop()
        else: stk.append(num)
            
    print(sum(stk))
    
solution()