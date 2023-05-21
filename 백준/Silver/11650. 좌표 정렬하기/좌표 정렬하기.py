import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(fi().rstrip())
    arr = []
    for i in range(n):
        x, y = map(int, fi().split())
        arr.append([x, y])
    
    arr.sort(key = lambda r: (r[0], r[1]))
    
    for v in arr:
        print(*v)
            
if __name__ == '__main__':
    solution()