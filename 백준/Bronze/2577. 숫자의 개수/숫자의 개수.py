a=int(input())
b=int(input())
c=int(input())

nums = [0 for _ in range(10)]

multi = str(a*b*c)

for i in range(len(multi)):
    nums[int(multi[i])] += 1

for i in nums:
    print(i)