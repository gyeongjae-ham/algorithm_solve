import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = input().rstrip()

for i in a:
    if ord(i) < 68:
        print(chr(ord(i)+23), end='')
    else:
        print(chr(ord(i)-3), end='')