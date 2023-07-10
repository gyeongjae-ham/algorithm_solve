import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    a = list(map(int, fi().split()))
    b = list(map(int, fi().split()))
    a.sort()
    b.sort(reverse=True)
    # print(*b, sep=" ")
    
    ans = 0
    for i in range(n):
        ans += a[i] * b[i]
    print(ans)
    
if __name__ == '__main__':
    solution()