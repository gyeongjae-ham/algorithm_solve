import sys
fi = sys.stdin.readline
                
def solution():
    d = [0] * 92
    n = int(fi().rstrip())
    
    d[1] = 1
    d[2] = 1
    
    for i in range(3, n+1):
        d[i] = d[i-1] + d[i-2]
    
    print(d[n])
    
if __name__ == '__main__':
    solution()