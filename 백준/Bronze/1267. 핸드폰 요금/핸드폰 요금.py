import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n = int(input())
    call = list(map(int, input().split()))

    y = 0
    m = 0
    for v in call:
        y += (v//30+1)*10
        m += (v//60+1)*15

    if y > m:
        print("M", m)
    elif y == m:
        print("Y M", m)
    else:
        print("Y", y)
        
solution()