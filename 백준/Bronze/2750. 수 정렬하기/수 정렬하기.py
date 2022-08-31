n = int(input())

nums = []
for _ in range(n):
    nums.append(int(input()))

nums.sort()
for i in range(len(nums)):
    print(nums[i])