import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
a = list(map(int, input().split()))
x = int(input().rstrip())
cur = [False] * 2000001
ans = 0

for i in range(n):
    if x - a[i] > 0 and cur[x-a[i]]: ans+=1
    cur[a[i]] = True

print(ans)