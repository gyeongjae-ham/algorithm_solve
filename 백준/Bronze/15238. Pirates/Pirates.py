import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
a = input().rstrip()
al = [0 for _ in range(28)]

for i in range(n):
    al[ord(a[i]) - 97] += 1

print(chr(al.index(max(al))+97), max(al))