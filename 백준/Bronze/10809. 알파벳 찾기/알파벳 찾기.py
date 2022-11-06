import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = input().rstrip()
b = list(range(97,123))

for i in b:
    print(a.find(chr(i)), end=' ')