import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for i in range(n,0,-1):
    print(" "*(n-i) + "*" * (2*i-1))