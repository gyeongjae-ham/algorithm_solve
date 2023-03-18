import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    S = []
    w = r().rstrip()
    sum = 0
    num = 1
    for i in range(len(w)):
        if w[i] == '(':
            num *= 2
            S.append(w[i])
        elif w[i] == '[':
            num *= 3
            S.append(w[i])
        elif w[i] == ')':
            if len(S)==0 or S[-1] != '(':
                print(0)
                exit()
            else:
                if w[i-1]=='(': sum += num
                num //= 2
                S.pop()
        else:
            if len(S)==0 or S[-1] != '[':
                print(0)
                exit()
            else:
                if w[i-1]=='[': sum += num
                num //= 3
                S.pop()
                
    if len(S)!=0: print(0)
    else: print(sum)
    
solution()