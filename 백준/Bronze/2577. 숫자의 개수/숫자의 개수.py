import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    tmp = 1
    answer = [0 for _ in range(10)]
    for _ in range(3):
        tmp *= int(r().rstrip())
    number = str(tmp)
    
    for c in number:
        answer[int(c)] += 1
    
    for v in answer:
        print(v)
    
solution()