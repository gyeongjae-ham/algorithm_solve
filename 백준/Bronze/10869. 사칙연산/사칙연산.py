import sys
fi = sys.stdin.readline
                
def solution():
    a, b = map(int, fi().split())
    print(a + b)
    print(a - b)
    print(a * b)
    print(a // b)
    print(a % b)
    
if __name__ == '__main__':
    solution()