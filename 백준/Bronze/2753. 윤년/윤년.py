import sys
fi = sys.stdin.readline

def solution():
    n = int(fi().rstrip())
    if n % 4 == 0 and n % 100 != 0: print(1)
    elif n % 400 == 0: print(1)
    else: print(0)
    
if __name__ == '__main__':
    solution()