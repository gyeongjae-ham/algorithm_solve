n = int(input())
t = list(map(int, input().split()))

t.sort()

res = 0
time = 0

for i in t:
    time += i
    res += time

print(res)