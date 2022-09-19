import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

tall = []
for i in range(9):
    tall.append(int(input().rstrip()))

total = sum(tall)

for i in range(len(tall)):
    for j in range(i+1, len(tall)):
        if total - (tall[i]+tall[j]) == 100:
            temp1 = tall[i]
            temp2 = tall[j]

tall.remove(temp1)
tall.remove(temp2)

tall.sort()
for i in tall:
    print(i)