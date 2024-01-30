import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    for i in range(n, 0, -1):
        print(' '*(n-i), '*'*i, sep='')
    
if __name__ == '__main__':
    solution()