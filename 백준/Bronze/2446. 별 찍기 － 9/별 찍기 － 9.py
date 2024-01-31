import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    for i in range(n, 0, -1):
        print(' '*(n-i), '*'*((i*2)-1), sep='')
        
    for j in range(2, n+1):
        print(' '*(n-j), '*'*((2*j)-1), sep='')
    
if __name__ == '__main__':
    solution()