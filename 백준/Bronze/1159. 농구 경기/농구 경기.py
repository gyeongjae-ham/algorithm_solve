import sys; input = sys.stdin.readline
import copy

num = int(input().rstrip())
al = [0 for _ in range(26)]

for i in range(num):
    a = input().rstrip()
    al[ord(a[0])-97]+=1

answer = ""
for i in range(len(al)):
    if al[i] >= 5:
        answer += chr(i+97)

if answer == "":
    print("PREDAJA")
else:
    print(answer)