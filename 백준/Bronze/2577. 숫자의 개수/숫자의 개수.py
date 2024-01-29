import sys
fi = sys.stdin.readline
                
def solution():
    a = int(fi().rstrip())
    b = int(fi().rstrip())
    c = int(fi().rstrip())
    
    res = [0 for i in range(10)]
    for i in str(a*b*c):
        res[int(i)] += 1
        
    print(*res, sep="\n")
        
    
if __name__ == '__main__':
    solution()