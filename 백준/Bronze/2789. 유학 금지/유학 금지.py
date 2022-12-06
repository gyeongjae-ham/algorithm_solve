import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = input().rstrip()
uni = "CAMBRIDGE"

ans = ""
for i in a:
    if i in uni:
        continue
    else:
        ans += i
print(ans)