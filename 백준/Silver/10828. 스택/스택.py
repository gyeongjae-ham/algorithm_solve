import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(r().rstrip())
    stk = []
    for _ in range(n):
        command = r().split()
        if command[0] == 'push':
            stk.append(int(command[1]))
        elif command[0] == 'top' and stk:
            print(stk[-1])
        elif command[0] == 'size':
            print(len(stk))
        elif command[0] == 'empty':
            if stk: print(0)
            else: print(1)
        else:
            if stk:
                print(stk.pop())
            else:
                print(-1)
        
    
solution()