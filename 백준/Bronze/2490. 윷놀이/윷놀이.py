import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

yt = ['D', 'C', 'B', 'A', 'E']

for _ in range(3):
    s = sum(list(map(int, input().split())))
    print(yt[s])