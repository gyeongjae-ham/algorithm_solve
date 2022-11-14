import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = input().rstrip()

lw = "d2"
uw = "D2"

if lw in a or uw in a:
    print("D2")
else:
    print("unrated")