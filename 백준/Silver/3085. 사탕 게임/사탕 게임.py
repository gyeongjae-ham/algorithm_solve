import sys
input = lambda: sys.stdin.readline().rstrip()

def check(ar):
    n = len(ar)
    ans = 1
    
    for i in range(n):
        cnt = 1
        for j in range(1, n):
            if ar[i][j] == ar[i][j-1]:
                cnt += 1
            else:
                cnt = 1
            ans = max(ans, cnt)
        
        cnt = 1
        for j in range(1, n):
            if ar[j][i] == ar[j-1][i]:
                cnt += 1
            else:
                cnt = 1
            ans = max(ans, cnt)
    return ans

def solution():
    n = int(input())
    ar = [list(input()) for _ in range(n)]
    ans = 0
    
    for i in range(n):
        for j in range(n-1):
            ar[i][j], ar[i][j+1] = ar[i][j+1], ar[i][j]
            ans = max(ans, check(ar))
            ar[i][j], ar[i][j+1] = ar[i][j+1], ar[i][j]
    
    for i in range(n-1):
        for j in range(n):
            ar[i][j], ar[i+1][j] = ar[i+1][j], ar[i][j]
            ans = max(ans, check(ar))
            ar[i][j], ar[i+1][j] = ar[i+1][j], ar[i][j]
    
    print(ans)
    

if __name__ == "__main__":
    solution()