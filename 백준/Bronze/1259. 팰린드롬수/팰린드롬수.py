import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

while(True):
    a = input().rstrip()
    if a == "0":
        break
    elif a == a[::-1]:
        print("yes")
    else:
        print("no")