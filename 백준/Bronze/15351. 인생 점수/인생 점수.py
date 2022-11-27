import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

a = int(input().rstrip())

for i in range(a):
    word = input().rstrip()
    ans = 0
    for j in range(len(word)):
        ans += alp.find(word[j])+1
    
    if ans == 100:
        print("PERFECT LIFE")
    else:
        print(ans)