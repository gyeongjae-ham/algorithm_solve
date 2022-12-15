import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

word = input().rstrip()

jc = 0
ic = 0
for i in range(len(word)-2):
    if word[i] == 'J':
        if word[i+1] == 'O' and word[i+2] == 'I':
            jc += 1
    elif word[i] == 'I':
        if word[i+1] == 'O' and word[i+2] == 'I':
            ic += 1
print(jc)
print(ic)