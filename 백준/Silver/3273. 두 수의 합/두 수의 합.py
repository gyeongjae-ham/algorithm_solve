import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    t = int(r().rstrip())
    arr = list(map(int, r().split()))
    num = int(r().rstrip())
    
    arr.sort()
    left = 0
    right = len(arr) - 1
    ans = 0
    while left < right:
        if arr[left] + arr[right] == num:
            ans += 1
            left += 1
            right -= 1
        if arr[left] + arr[right] < num:
            left += 1
        if arr[left] + arr[right] > num:
            right -= 1
    
    print(ans)
    
solution()