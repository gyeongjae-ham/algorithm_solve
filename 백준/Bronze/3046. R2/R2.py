import sys
fi = sys.stdin.readline
                
def solution():
    a, b = map(int, fi().split())
    print((2 * b) - a)
    
if __name__ == '__main__':
    solution()