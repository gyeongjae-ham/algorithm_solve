import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

word = input().rstrip()
word2 = word[::-1]

for i in range(len(word)):
    if word[i] != word2[i]:
        print(0)
        exit()
    else:
        continue
print(1)