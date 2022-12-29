import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for _ in range(n):
    ws = input().split()
    ws[0] = 'god'
    print(*ws, sep='')