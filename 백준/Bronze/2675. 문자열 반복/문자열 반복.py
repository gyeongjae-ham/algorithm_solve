n = int(input())


for _ in range(n):
    r, s = input().split()
    r = int(r)
    res = ""
    for i in range(len(s)):
        res += s[i] * r
    print(res)
