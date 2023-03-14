import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

for i in range(3):
    arr = list(map(int, input().split()))
    ans = 0
    for k in arr:
        if k==0: ans+=1
    
    if ans == 1: print("A")
    elif ans == 2: print("B")
    elif ans == 3: print("C")
    elif ans == 4: print("D")
    else: print("E")