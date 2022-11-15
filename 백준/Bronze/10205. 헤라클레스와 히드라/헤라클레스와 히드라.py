import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())

for i in range(n):
    num = int(input().rstrip())
    tmp = input().rstrip()
    
    for k in tmp:
        if k == "c":
            num += 1
        elif k == "b":
            num -= 1
    
    print(f"Data Set {i+1}:")
    print(num)
    print()