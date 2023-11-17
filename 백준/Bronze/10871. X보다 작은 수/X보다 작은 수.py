import sys
fi = sys.stdin.readline
                
def solution():
    n, x = map(int, fi().split())
    a = list(map(int, fi().split()))
    
    for i in a:
        if i < x: print(i, end=" ")
    
if __name__ == '__main__':
    solution()