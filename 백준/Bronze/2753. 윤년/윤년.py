import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

yr = int(input().rstrip())

if (yr%4==0 and yr%100!=0 ) or yr%400==0: print(1)
else: print(0)