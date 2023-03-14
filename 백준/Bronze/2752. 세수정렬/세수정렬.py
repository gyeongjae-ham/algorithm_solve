import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

arr = list(map(int, input().split()))
arr.sort()

print(*arr)