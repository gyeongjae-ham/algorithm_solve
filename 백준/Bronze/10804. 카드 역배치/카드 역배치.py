import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

li=[i for i in range(1, 21)]

for i in range(10):
    m, n = map(int, input().split())
    a=li[:m-1]
    b=li[m-1:n][::-1]
    c=li[n:]
    li=a+b+c
    
print(*li)