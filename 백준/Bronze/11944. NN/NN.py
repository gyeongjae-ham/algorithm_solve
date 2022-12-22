import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a, b = map(int, input().split())

res = str(a)*a
print(res if len(res) <= b else res[:b])