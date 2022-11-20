import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

num = input().rstrip()
num = "".join(reversed(num))

cnt = 0
res = ""
for i in range(len(num)):
    if cnt == 3:
        res += ","
        res += num[i]
        cnt = 1
    elif cnt < 3:
        res += num[i]
        cnt += 1
print(res[::-1])