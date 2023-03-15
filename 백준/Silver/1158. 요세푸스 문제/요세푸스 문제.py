import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n,k = map(int,input().split())
arr = [i for i in range(1,n+1)]

ans = []
rm = 0

for t in range(n):
    rm += k-1  
    if rm >= len(arr): 
        # The 'rm' operates circularly, without exceeding its length, by using modular operations.
        rm = rm%len(arr)
 
    ans.append(str(arr.pop(rm)))
print("<",", ".join(ans),">", sep='')