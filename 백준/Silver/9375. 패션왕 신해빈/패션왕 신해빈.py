import sys, re
input = sys.stdin.readline

t = int(input().rstrip())

for _ in range(t):
    n = int(input().rstrip())
    closet = {}
    ans = 1
    
    for i in range(n):
        a,b = map(str, input().split())
        if b in closet.keys():
            closet[b] += 1
        else:
            closet[b] = 1
    
    for value in closet.values():
        ans *= value+1
    print(ans-1)