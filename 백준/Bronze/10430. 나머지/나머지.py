import sys
fi = sys.stdin.readline
                
def solution():
    A, B, C = map(int, fi().split())
    print((A+B)%C)
    print(((A%C) + (B%C))%C)
    print((A*B)%C)
    print(((A%C) * (B%C))%C)
    
if __name__ == '__main__':
    solution()