import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
    
s = []
ans = []
n = int(input().rstrip())
cnt = 1
while n:
    num = int(input().rstrip())
    while cnt <= num:
        s.append(cnt)
        cnt += 1
        ans += "+\n"
    if s[-1] != num:
        print("NO\n")
        quit()
    s.pop()
    ans+="-\n"
    n-=1

print(''.join(ans))