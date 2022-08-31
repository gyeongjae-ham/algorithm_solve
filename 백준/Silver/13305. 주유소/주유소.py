import sys
input = sys.stdin.readline

n = int(input())

roads = list(map(int, input().split()))
price = list(map(int, input().split()))

min = price[0]
res = min * roads[0]
for i in range(1, n-1):
    if min > price[i]:
        min = price[i]
    res += roads[i]*min

print(res)