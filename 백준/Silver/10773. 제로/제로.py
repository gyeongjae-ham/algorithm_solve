import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
    
s = []
n = int(input().rstrip())

while n:
    num = int(input().rstrip())
    if num != 0: s.append(num)
    else: s.pop()
    n-=1

print(sum(s))