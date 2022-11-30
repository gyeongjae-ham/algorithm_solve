import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

word = list(map(str, input().split('-')))

ans = ""
for i in word:
    ans += i[0]
print(ans)