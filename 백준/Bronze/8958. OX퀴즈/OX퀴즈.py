n = int(input())

for _ in range(n):
    s = input()
    cnt = 0
    sum = 0
    for i in range(len(s)):
        if s[i] == "O":
            cnt += 1
            sum += cnt
        else:
            cnt = 0
    print(sum)