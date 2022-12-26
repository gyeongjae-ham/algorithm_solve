import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for _ in range(n):
    data = input().split('-')
    n1 = n2 = 0
    for i, j in enumerate(data[0][::-1]):
        n1 += ((ord(j)-65)*(26**i))
    n2 = int(data[1])
    if abs(n1 - n2) <= 100:
        print('nice')
    else:
        print('not nice')