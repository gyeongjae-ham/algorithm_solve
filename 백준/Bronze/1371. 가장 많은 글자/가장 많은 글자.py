import sys
# input = sys.stdin.readline
sys.setrecursionlimit(10**6)

ans = [0]*26
s = sys.stdin.read()
for c in s:
    if c.islower():
        ans[ord(c)-97] += 1
            
for i in range(26):
    if ans[i] == max(ans):
        print(chr(97+i), end='')