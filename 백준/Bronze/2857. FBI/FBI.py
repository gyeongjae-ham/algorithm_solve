import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

ans = []

for i in range(5):
    a = input().rstrip()
    
    if a.find('FBI') != -1:
        ans.append(i+1)

if len(ans) == 0:
    print('HE GOT AWAY!')
else:
    print(*ans)