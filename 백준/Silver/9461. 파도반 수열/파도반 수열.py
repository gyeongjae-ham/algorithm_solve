import sys
fi = sys.stdin.readline
                
def solution():
    t = int(fi().rstrip())
    d = [1 for _ in range(101)]
    
    d[4] = 2
    d[5] = 2
    
    for i in range(6, 101):
        d[i] = d[i-1] + d[i-5]
    
    while t > 0:
        t -= 1
        n = int(fi().rstrip())
        print(d[n])
    
if __name__ == '__main__':
    solution()