import sys
from itertools import combinations
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

while True:
    
    n = list(map(int, input().split()))
    k = n[0]
    s = n[1:]

    for i in combinations(s, 6):
        print(*i)
    if k==0:
        exit()
    print()