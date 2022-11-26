import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = int(input().rstrip())
oper = input().rstrip()
b = int(input().rstrip())

if oper == "*":
    print(a*b)
else:
    print(a+b)