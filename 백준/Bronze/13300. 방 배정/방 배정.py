import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n, k = map(int, input().split())
ga = [0]*7
ba = [0]*7
cnt = 0

for _ in range(n):
    s,y = map(int, input().split())
    if s: ba[y] += 1
    else: ga[y] += 1

for j in ga:
    cnt += (j//k) + (1 if j%k else 0)
for l in ba:
    cnt += (l//k) + (1 if l%k else 0)
        
print(cnt)