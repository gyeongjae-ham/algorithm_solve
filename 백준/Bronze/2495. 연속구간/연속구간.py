import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

for _ in range(3):
    s = str(input().rstrip())
    cmax = 1
    cnt = 1
    for i in range(1,len(s)):
        if s[i] == s[i-1]:
            cnt += 1
        else:
            cmax = max(cnt, cmax)
            cnt = 1
    cmax = max(cnt, cmax)
    print(cmax)