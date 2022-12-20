import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for _ in range(n):
    a = input().rstrip()
    res = str(int(a) + int(a[::-1]))
    print("YES" if res == res[::-1] else "NO")