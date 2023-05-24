import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def sum_num(s):
    res = 0
    for i in s:
        if i.isdigit():
            res += int(i)
    return res
                
def solution():
    global arr
    
    n = int(fi().rstrip())
    arr = [fi().rstrip() for _ in range(n)]
    
    arr.sort(key = lambda x : (len(x), sum_num(x), x))
    for v in arr:
        print(v)
                
if __name__ == "__main__":
    solution()