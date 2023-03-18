import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    S = []
    string = r().rstrip()
    sum = 0
    for i in range(len(string)):
        if string[i]=='(': S.append(string[i])
        elif len(S)!=0 and string[i]==')':
            if string[i-1]=='(':
                S.pop()
                sum += len(S)
            else:
                S.pop()
                sum += 1
    print(sum)
    
solution()