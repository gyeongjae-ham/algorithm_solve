import sys
from itertools import combinations
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

a,b = map(int, input().split())
array = list(map(int, input().split()))

cnt=0
for i in range(1, a+1):
    comb = combinations(array, i)
    
    for x in comb:
        if sum(x) == b:
            cnt+=1

print(cnt)