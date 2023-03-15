import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = int(input().rstrip())
b = int(input().rstrip())
c = int(input().rstrip())

result = list(str(a*b*c))

for i in range(10):
    print(result.count(str(i)))	