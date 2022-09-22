import sys
input = sys.stdin.readline

n = int(input().rstrip())

cnt = 0
for _ in range(n):
    stack = []
    word = input().rstrip()
    
    for i in word:
        if len(stack) == 0:
            stack.append(i)
        elif i == stack[-1]:
            stack.pop()
        else:
            stack.append(i)
    
    if len(stack) == 0:
        cnt+=1

print(cnt)