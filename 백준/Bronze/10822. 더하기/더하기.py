import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

nl = list(map(int, input().split(',')))
print(sum(nl))