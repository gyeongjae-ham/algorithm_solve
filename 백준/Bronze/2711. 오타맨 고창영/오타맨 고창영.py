import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for i in range(n):
    a, b = input().split()
    ans = ""
    for j in range(len(b)):
        if j == int(a)-1:
            continue
        else:
            ans += b[j]
    print(ans)