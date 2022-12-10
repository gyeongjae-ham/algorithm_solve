import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
for _ in range(n):
    p = int(input().rstrip())
    max = 0
    ans = ""
    for _ in range(p):
        price, name = input().split()
        price = int(price)
        if(price > max):
            max = price
            ans = name
    print(ans)