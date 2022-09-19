def solution(s):
    stack = []
    for i in range(len(s)):
        if s[i] == '(':
            stack.append(s[i])
        elif s[i] == ')':
            if len(stack) == 0:
                return False
            else:
                stack.pop()
    
    if len(stack) == 0:
        answer = True
    else:
        answer = False
    
    return answer