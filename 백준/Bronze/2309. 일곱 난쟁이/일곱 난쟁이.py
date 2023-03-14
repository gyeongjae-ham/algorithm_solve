import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

h = [int(input().rstrip()) for _ in range(9)]

for i in range(8):
    for j in range(i+1, 9):
        tmp = sum(h) - (h[i]+h[j])
        if tmp == 100:
            h1 = h[i]
            h2 = h[j]

h.remove(h1)
h.remove(h2)
h.sort()

print(*h, sep='\n')