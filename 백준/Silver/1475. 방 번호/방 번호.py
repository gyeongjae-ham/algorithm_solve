import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
a = [0]*10
ans = 0
while n:
    a[int(n%10)] += 1
    n //= 10

for i in range(10):
    if i==6 or i==9: continue
    ans = max(ans, a[i])

ans = max(ans, (a[6]+a[9]+1)//2)
print(ans)