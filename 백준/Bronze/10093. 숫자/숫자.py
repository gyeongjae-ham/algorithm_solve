import sys
fi = sys.stdin.readline
                
def solution():
    a, b = map(int, fi().split())
    n1 = min(a,b)
    n2 = max(a,b)
    
    n = n2 - n1 - 1
    if n2 - n1 <= 1:
        n = 0
    
    print(n)
    arr = [i for i in range(n1 + 1, n2)]
    print(*arr, end="")
    
if __name__ == '__main__':
    solution()