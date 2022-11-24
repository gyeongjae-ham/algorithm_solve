import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = input().rstrip()
b = list(map(str, input().split()))

ans = ""
for i in range(len(a)):
    if a[i] in b:
        ans += a[i].lower()
    else:
        ans += a[i]

print(ans)