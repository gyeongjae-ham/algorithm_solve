n = int(input())
num = input()

sum = 0
for i in range(n):
    if int(num[i]) == 0:
        continue
    sum += int(num[i])

print(sum)