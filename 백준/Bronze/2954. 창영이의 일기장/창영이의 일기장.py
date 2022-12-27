import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

w = input().rstrip()
i = 0
a = ['a', 'e', 'i', 'o', 'u']
while i < len(w):
    print(w[i], end='')
    if w[i] in a:
        i += 2
    i += 1