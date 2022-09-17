import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for i in range(1, n+1):
    a,b = map(int, input().split())
    print("Case #{0}: {1}".format(i, a+b))