import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

word = input().rstrip()
alpha = [0] * 26

for i in range(len(word)):
    alpha[ord(word[i])-97]+=1

for i in alpha:
    print(i, end=' ')