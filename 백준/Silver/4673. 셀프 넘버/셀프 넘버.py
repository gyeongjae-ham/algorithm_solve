def d(n):
    n = n + sum(map(int, str(n)))
    return n

x = set()

for i in range(1, 10001):
    x.add(d(i))

for i in range(1, 10001):
    if i not in x:
        print(i)