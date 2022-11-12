import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
a = input().rstrip()

cntA = a.count('2')
cntB = a.count('e')

if cntA > cntB:
    print(2)
elif cntB > cntA:
    print('e')
else:
    print('yee')