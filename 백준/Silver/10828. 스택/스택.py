import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
    
s = []
n = int(input().rstrip())
for _ in range(n):
    cm = input().rstrip().split()
    if cm[0]=='push': s.append(cm[1])
    elif cm[0]=='top':
        if len(s): print(s[-1])
        else: print(-1)
    elif cm[0]=='size': print(len(s))
    elif cm[0]=='empty':
        if len(s): print(0)
        else: print(1)
    elif cm[0]=='pop':
        if len(s): print(s.pop())
        else: print(-1)