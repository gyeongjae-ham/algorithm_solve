import sys
fi = sys.stdin.readline
                
def solution():
    t = int(fi().rstrip())
    
    for _ in range(t):
        x, y = map(int, fi().split())
        print(x+y)
    
if __name__ == '__main__':
    solution()