import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

std = []
for _ in range(28):
    std.append(int(input().rstrip()))

for i in range(1, 31):
    if i not in std:
        print(i)