import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    n, *arr = fi().split()
    while len(arr) < int(n):
        nums = fi().split()
        arr.extend(nums)
            
    for i in range(len(arr)):
        rn = "".join(reversed(arr[i])).lstrip("0")
        arr[i] = int(rn)
        
    arr.sort()
    print(*arr, sep="\n")
        
if __name__ == "__main__":
    solution()