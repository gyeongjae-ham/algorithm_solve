import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    N = r().rstrip()
    nums = [0 for _ in range(10)]
    for i in N:
        if i == '6' and nums[6] > nums[9]:
            nums[9] += 1
        elif i == '9' and nums[9] > nums[6]:
            nums[6] += 1
        else:
            nums[int(i)] += 1
    nums.sort(reverse=True)
    print(nums[0])
    
solution()