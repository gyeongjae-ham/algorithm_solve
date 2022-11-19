import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for i in range(n):
    num = input().rstrip()
    print(len(num))