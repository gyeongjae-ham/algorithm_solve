import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)

def solution():
    n, m = map(int, fi().split())
    a = list(map(int, fi().split()))
    b = list(map(int, fi().split()))
    c = [0 for _ in range(2000000)]
    
    aidx = 0
    bidx = 0
    for i in range(n + m):
        if aidx == n: 
            c[i] = b[bidx]
            bidx += 1
        elif bidx == m: 
            c[i] = a[aidx]
            aidx += 1
        elif a[aidx] <= b[bidx]: 
            c[i] = a[aidx]
            aidx += 1
        else: 
            c[i] = b[bidx]
            bidx += 1
    
    for i in range(n+m):
        print(c[i], end=" ")
        
if __name__ == '__main__':
    solution()