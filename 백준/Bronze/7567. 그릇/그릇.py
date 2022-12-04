import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = input().rstrip()

ans = ""
cnt = 0
for i in range(len(a)):
    if len(ans) == 0:
        ans += a[i]
        cnt += 10
    elif ans[-1] == a[i]:
        ans += a[i]
        cnt += 5
    elif ans[-1] != a[i]:
        ans += a[i]
        cnt += 10
print(cnt)