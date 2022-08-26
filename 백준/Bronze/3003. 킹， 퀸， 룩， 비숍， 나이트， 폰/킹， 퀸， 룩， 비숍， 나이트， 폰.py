import sys
input = sys.stdin.readline

a = list(map(int, input().split()))
c = [1,1,2,2,2,8]

res = []
for i in range(len(c)):
    res.append(c[i]-a[i])

for i in res:
    print(i, end=" ")