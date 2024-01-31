import sys
fi = sys.stdin.readline
                
def solution():
    t = int(fi().rstrip())
    num = list(map(int, fi().split()))
    target = int(fi().rstrip())
    
    print(num.count(target))
    
if __name__ == '__main__':
    solution()