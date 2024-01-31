import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    for j in range(1, n):
        print(' '*(n-j), '*'*(2*j-1), sep='')
    for i in range(n, 0, -1):
        print(' '*(n-i), '*'*(i*2-1), sep='')
    
if __name__ == '__main__':
    solution()