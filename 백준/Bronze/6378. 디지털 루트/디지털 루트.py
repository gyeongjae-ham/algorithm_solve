import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

while(1):
    a = int(input().rstrip())
    
    if a == 0:
        break
    
    while(1):
        a = sum(list(map(int, str(a))))
        
        if (a // 10 == 0):
            print(a)
            break