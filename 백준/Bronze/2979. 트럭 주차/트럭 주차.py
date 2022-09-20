import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

a,b,c = map(int, input().split())
time = [0 for _ in range(101)]
answer = 0

for _ in range(3):
    x,y = map(int, input().split())
    for i in range(x,y):
        time[i] += 1
    
for i in time:
    if i == 1:
        answer += i*a
    elif i == 2:
        answer += i*b
    else:
        answer += i*c
        
print(answer)