import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = input().rstrip()
lst = [0]*26

for i in n:
	lst[ord(i)-97] = n.count(i)
print(*lst)