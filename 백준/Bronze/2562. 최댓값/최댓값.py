import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

mn = mi = 0

for i in range(9):
    a = int(input().rstrip())
    
    if(a > mn):
        mn = a
        mi = i + 1
        
print(mn, mi, sep='\n')