nums = []
for _ in range(9):
    nums.append(int(input()))

idx = nums.index(max(nums))
print(nums[idx], idx+1, sep="\n")