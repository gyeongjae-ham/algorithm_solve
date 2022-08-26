n = int(input())

t = []
for _ in range(n):
    s,f = map(int, input().split())
    t.append((s, f))

t.sort(key=lambda x: x[0])
t.sort(key=lambda x: x[1])

last = 0
cnt = 0

for i,j in t:
    if i >= last:
        cnt+=1
        last=j

print(cnt)