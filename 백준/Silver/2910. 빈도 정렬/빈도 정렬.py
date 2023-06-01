import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    n, c = map(int, fi().split())
    arr = list(map(int, fi().split()))
    order = list()
    
    for i in arr:
        if not i in order: order.append(i)
    ans = sorted(arr, key=lambda x : (-arr.count(x), order.index(x)))
    print(*ans)
    
if __name__ == "__main__":
    solution()