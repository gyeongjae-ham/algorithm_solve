import sys
input = sys.stdin.readline

n = int(input().rstrip())
m = int(input().rstrip())
ing = list(map(int, input().split()))
ing.sort()

left, right = 0, len(ing) - 1
count = 0

while left < right:
    sum_num = ing[left] + ing[right]
    if sum_num < m:
        left += 1
    elif sum_num > m:
        right -= 1
    else:
        count += 1
        left += 1
        right -= 1

print(count)
