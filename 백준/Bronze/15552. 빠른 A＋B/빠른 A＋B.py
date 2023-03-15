import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for _ in range(n):
    a, b = map(int, input().split())
    print(a+b)