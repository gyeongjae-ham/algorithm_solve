import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
num = 0
cnt = 0

while True:
    if '666' in str(num):
        cnt += 1
    
    if cnt == n:
        print(num)
        break
    num += 1