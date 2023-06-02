import sys
from collections import deque
from itertools import permutations
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    n = int(fi().rstrip())
    nums = list(map(int, fi().split()))
    ops = list(map(int, fi().split()))
    op_str = ['+', '-', '*', '/']
    op = []
    
    for i in range(len(ops)):
        for j in range(ops[i]):
            op.append(op_str[i])
    
    maxV = -(sys.maxsize + 1)
    minV = sys.maxsize
    iters = list(set(permutations(op, n-1)))
    for v in iters:
        res = nums[0]
        # 맨 앞의 수는 빼고 해야 하니까 1부터
        for i in range(1, n):
            if v[i-1] == '+':
                res += nums[i]
            elif v[i-1] == '-':
                res -= nums[i]
            elif v[i-1] == '*':
                res *= nums[i]
            elif v[i-1] == '/':
                res = int(res/nums[i])
        
        maxV = max(maxV, res)
        minV = min(minV, res)
    
    print(maxV)
    print(minV)
    
if __name__ == "__main__":
    solution()