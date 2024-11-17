import sys
input = lambda: sys.stdin.readline().rstrip()

def solution():
    E, S, M = map(int, input().split())
    e=1
    s=1
    m=1
    
    i = 1
    while True:
        if e==E and s==S and m==M:
            print(i)
            break
        e += 1
        s += 1
        m += 1
        
        if e == 16:
            e = 1
        if s == 29:
            s = 1
        if m == 20:
            m = 1
        i += 1

if __name__ == "__main__":
    solution()