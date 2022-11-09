import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = int(input().rstrip())
b = input().rstrip()

cntA = 0
cntB = 0
for i in range(a):
    if b[i]=='A':
        cntA += 1
    elif b[i] == 'B':
        cntB += 1
if cntA > cntB:
    print('A')
elif cntB > cntA:
    print('B')
else:
    print('Tie')