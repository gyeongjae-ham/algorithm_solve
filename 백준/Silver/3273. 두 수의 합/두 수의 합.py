import sys
fi = sys.stdin.readline
                
def solution():
    t = int(fi().rstrip())
    n = list(map(int, fi().split()))
    x = int(fi().rstrip())
    
    n.sort()
    res = 0
    l = 0
    r = len(n) - 1
    
    while r - l > 0:
        if n[l] + n[r] == x:
            res += 1
            r = r - 1
        elif n[l] + n[r] < x:
            l = l + 1
        elif n[l] + n[r] > x:
            r = r - 1
    print(res)
        
    
if __name__ == '__main__':
    solution()