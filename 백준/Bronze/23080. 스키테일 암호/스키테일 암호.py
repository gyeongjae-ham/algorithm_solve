import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
a = input().rstrip()

res = ""
for i in range(0, len(a), n):
    res += a[i]
print(res)