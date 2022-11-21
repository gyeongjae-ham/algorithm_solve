import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
a = input().rstrip()
b = input().rstrip()

cnt = 0
for i in range(len(a)):
    if a[i] != b[i]:
        cnt += 1

print(cnt)