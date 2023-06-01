import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    n = int(fi().rstrip())
    arr = [fi().rstrip() for _ in range(n)]
    
    arr = list(set(arr))
    arr.sort(key=lambda x: (len(x), x))
    
    print(*arr, sep="\n")

if __name__ == "__main__":
    solution()