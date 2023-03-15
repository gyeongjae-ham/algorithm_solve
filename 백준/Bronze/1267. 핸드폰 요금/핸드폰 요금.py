import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
c = list(map(int, input().split()))
m=y=0
for i in range(n):
    y += (c[i]//30 + 1) * 10
    m += (c[i]//60 + 1) * 15

if m < y: print("M", m)
elif m > y: print("Y", y)
elif m == y: print("Y M", m)