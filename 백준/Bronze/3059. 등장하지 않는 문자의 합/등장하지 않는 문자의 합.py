import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

a = int(input().rstrip())

for i in range(a):
    word = input().rstrip()
    ans = 0
    for j in range(len(alp)):
        if alp[j] not in word:
            ans += alp.find(alp[j])+65
    print(ans)