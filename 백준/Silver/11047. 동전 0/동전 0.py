n,k = map(int, input().split())
v = list()

for _ in range(n):
    v.append(int(input()))

v.sort(reverse=True)

cnt = 0
for i in v:
    if k >= i:
        cnt += k//i
        k %= i
        if k == 0:
            break

print(cnt)