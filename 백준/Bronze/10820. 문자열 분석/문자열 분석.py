import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

while True:
    a = sys.stdin.readline().rstrip('\n')
    
    if not a:
        break

    l, u, d, s = 0, 0, 0, 0
    for i in a:
        if i.islower():
            l += 1
        elif i.isupper():
            u += 1
        elif i.isdigit():
            d += 1
        elif i.isspace():
            s += 1

    print(l, u, d, s)