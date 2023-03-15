import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
a = list(map(int, input().split()))
x = int(input().rstrip())

print(a.count(x))