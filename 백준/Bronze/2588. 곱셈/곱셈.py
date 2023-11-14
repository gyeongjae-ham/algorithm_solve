import sys
fi = sys.stdin.readline
                
def solution():
    A = int(fi().rstrip())
    B = fi().rstrip()
    
    bb = B[-1]
    bm = B[1]
    bf = B[0]
    
    print(A * int(bb))
    print(A * int(bm))
    print(A * int(bf))
    print(A * int(bf+bm+bb))
    
if __name__ == '__main__':
    solution()