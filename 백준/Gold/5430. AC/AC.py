import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    t = int(r().rstrip())
    for _ in range(t):
        sp = r().rstrip()
        leng = int(r().rstrip())
        dq = deque(r().rstrip()[1:-1].split(','))
        isWrong = 0
        rtimes = 0
        
        if not leng: dq = deque()
        for c in sp:
            if c == 'R': rtimes += 1
            else:
                if len(dq) > 0:
                    if rtimes % 2 != 0: dq.pop()
                    else: dq.popleft()
                else:
                    isWrong = 1
                    print('error')
                    break;
        
        if rtimes % 2 != 0: dq.reverse()
        if not isWrong: print("[" + ",".join(dq) + "]")
                
solution()