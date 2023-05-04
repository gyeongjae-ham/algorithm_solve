import sys
from collections import deque
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    a, b, c = map(int, fi().split())
    
    print(recur(a, b, c))
    
def recur(a, b, m):
    # base condition
    if b == 1: return a % m
    
    # 2**n * 2**n = 2**(2*n) 원리
    val = recur(a, b//2, m)
    # 나머지만 구함
    val = val * val % m
    
    # 지수가 짝수면 그대로 리턴
    if b % 2 == 0: return val
    # 지수가 홀수면 a를 한번 더 곱해주고 나머지 리턴
    return val * a % m
    
if __name__ == '__main__':
    solution()