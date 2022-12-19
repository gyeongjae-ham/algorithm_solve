import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for i in range(n):
    a, b = input().split()
    a = ''.join(sorted(a))
    b = ''.join(sorted(b))
    
    cnt = 0
    for i in range(len(a)):
        if a[i] != b[i]:
            flag = False
            break
        else:
            flag = True
    
    if flag:
        print("Possible")
    else:
        print("Impossible")