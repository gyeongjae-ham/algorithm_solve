t = int(input())

types = [300, 60, 10]
res = [0, 0, 0]

for i in range(len(types)):
    res[i] = t//types[i]
    t = t%types[i]

if t:
    print(-1)
else:
    for i in res:
        print(i, end=' ')