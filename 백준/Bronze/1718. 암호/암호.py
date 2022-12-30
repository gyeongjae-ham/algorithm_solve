import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

w = input().rstrip()
k = input().rstrip()

ans = ''

for i in range(len(w)):
    if w[i] == ' ':
        ans += ' '
    else:
        ans += chr((ord(w[i]) - ord(k[i%len(k)]) - 1) % 26 + ord('a'))

print(ans)