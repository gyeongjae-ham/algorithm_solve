import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = input().rstrip()
b = input().rstrip()

if b in a:
    print(1)
else:
    print(0)