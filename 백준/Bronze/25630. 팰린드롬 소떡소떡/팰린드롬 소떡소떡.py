import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
s = input().rstrip()

cl = n // 2

if len(s) % 2 == 0:
    sf = s[:cl]
    sb = "".join(reversed(s[cl:]))
else:
    sf = s[:cl]
    sb = "".join(reversed(s[cl+1:]))

cnt = 0
for i in range(len(sf)):
    if sf[i] != sb[i]:
        cnt += 1

print(cnt)