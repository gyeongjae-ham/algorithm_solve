import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a,b = map(int, input().split())

if a > b: 
    a,b = b,a
    print(b-a-1)
    for i in range(a+1, b):
        print(i, end=' ')
elif a==b: print(a-b)
else:
    print(b-a-1)
    for i in range(a+1, b):
        print(i, end=' ')