import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
for i in range(n):
    a, b = input().split()
    print('Distances: ', end='')
    for j in range(len(a)):
        if ord(b[j])-64 >= ord(a[j])-64:
            print((ord(b[j])-64) - (ord(a[j])-64), end=' ')
        else:
            print((ord(b[j])-64+26) - (ord(a[j])-64), end=' ')
    print()