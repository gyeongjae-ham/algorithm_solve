import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    for j in range(1, n):
        print('*'*j, ' '*(2*n-2*j), '*'*j, sep='')
        
    print('*'*(n*2))
    
    for i in range(n, 0, -1):
        print('*'*(i-1), ' '*((n-i+1)*2), '*'*(i-1), sep='')
    
if __name__ == '__main__':
    solution()