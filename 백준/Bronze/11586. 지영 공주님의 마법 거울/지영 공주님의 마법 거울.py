import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

a = []
for i in range(n):
    a.append(input().rstrip())

st = int(input().rstrip())

if st == 1:
    for i in a:
        print(i)
elif st == 2:
    for i in a:
        print(i[::-1])
else:
    a.reverse()
    for i in a:
        print(i)