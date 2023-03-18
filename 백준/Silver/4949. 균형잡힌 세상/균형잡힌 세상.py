import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    while True:
        string = r().rstrip()
        S = []
        if string == '.': break;
        for i in string:
            if i == '(' or i == '[':S.append(i)
            elif i==')':
                if len(S)!=0 and S[-1]=='(': S.pop()
                else: 
                    S.append(i)
                    break
            elif i==']':
                if len(S)!=0 and S[-1]=='[': S.pop()
                else:
                    S.append(i)
                    break
            else: continue
                
        if len(S)==0: print('yes')
        else: print('no')
        
solution()