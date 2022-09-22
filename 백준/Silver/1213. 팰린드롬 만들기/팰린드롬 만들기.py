import sys
input = sys.stdin.readline

name = list(map(str, input().rstrip()))
res = ""
cen = ""
al = [0 for _ in range(26)]

for i in name:
    al[ord(i)-65]+=1

cnt = 0
for i in range(len(al)):
    if al[i] % 2 != 0:
        cnt += 1
        cen += chr(i+65)
        res += chr(i+65)*(al[i]//2)
    else:
        res += chr(i+65)*(al[i]//2)

reverse = res[::-1]
if cnt > 1:
    print("I'm Sorry Hansoo")
else:
    print(res + cen + reverse)