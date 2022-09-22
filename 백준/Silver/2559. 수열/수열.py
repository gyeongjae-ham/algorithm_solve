import sys, re
input = sys.stdin.readline

n, k = map(int, input().split())
temp = list(map(int, input().split()))
res = []

res.append(sum(temp[:k]))

for i in range(k,n):
    res.append(res[-1] + temp[i] - temp[i-k])
print(max(res))