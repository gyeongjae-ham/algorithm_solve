import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

ans = []

for _ in range(5):
    num = int(input().rstrip())
    ans.append(num)

ans.sort()
print(int(sum(ans)/len(ans)))
print(ans[2])