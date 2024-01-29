import sys
fi = sys.stdin.readline
                
def solution():
    a, b, c = map(int, fi().split())
    
    if a == b and a == c:
        print(10000 + (a*1000))
    elif a==b and a!=c:
        print(1000 + (a*100))
    elif a==c and a!=b:
        print(1000 + (a*100))
    elif b==c and b!=a:
        print(1000 + (b*100))
    else:
        print(max(a,b,c) * 100)
    
if __name__ == '__main__':
    solution()