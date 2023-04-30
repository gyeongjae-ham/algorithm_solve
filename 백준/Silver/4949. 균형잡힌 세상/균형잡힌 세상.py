import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    while True:
        q = deque()
        line = r().rstrip()
        if line == '.': break
        for c in line:
            if c == '[' or c == '(':
                q.append(c)
            elif c == ']':
                if q and q[-1] == '[':
                    q.pop()
                else: 
                    q.append(c)
                    break
            elif c == ')':
                if q and q[-1] == '(':
                    q.pop()
                else: 
                    q.append(c)
                    break
            else: continue
        
        if len(q) == 0: print('yes')
        else: print('no')
    
solution()