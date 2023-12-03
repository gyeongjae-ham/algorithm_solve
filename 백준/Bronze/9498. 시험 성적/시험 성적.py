import sys
fi = sys.stdin.readline

def solution():
    n = int(fi().rstrip())
    
    if n > 89: print('A')
    elif n > 79: print('B')
    elif n > 69: print('C')
    elif n > 59: print('D')
    else: print('F')
    
if __name__ == '__main__':
    solution()