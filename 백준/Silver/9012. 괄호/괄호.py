t = int(input())

for _ in range(t):
    stack = []
    s = list(map(str, input()))
    b = True
    for i in s:
        if i == '(':
            stack.append(i)
        if i == ')':
            if stack:
                stack.pop()
            elif not stack:
                b = False
                break
                
    if stack or not b:
        print("NO")
    elif not stack and b:
        print("YES")