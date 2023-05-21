import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(fi().rstrip())
    arr = []
    for i in range(n):
        age, name = fi().split()
        arr.append([age, name])
    
    arr.sort(key = lambda x: int(x[0]))
    
    for v in arr:
        print(*v)
            
if __name__ == '__main__':
    solution()