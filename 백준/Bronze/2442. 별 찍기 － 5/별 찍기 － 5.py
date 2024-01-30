import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    for i in range(1, n+1):
        print(' '*(n-i), '*'*(i*2-1), sep='')
    
if __name__ == '__main__':
    solution()