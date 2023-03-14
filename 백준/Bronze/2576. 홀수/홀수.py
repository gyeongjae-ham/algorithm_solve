import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

ans = []

for _ in range(7):
    num = int(input().rstrip())
    if num % 2 != 0: ans.append(num)

if len(ans) == 0: print(-1)
else:
    print(sum(ans))
    print(min(ans))