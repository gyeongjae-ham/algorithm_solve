import sys
read = sys.stdin.readline
N = int(input())
A = list(map(int, read().split()))

print(min(A), max(A))