import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

n = input().rstrip()
res = []
for i in n:
    res.append(i)
res.sort(reverse=True)
print(''.join(map(str, res)))