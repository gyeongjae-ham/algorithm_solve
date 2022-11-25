import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = input().rstrip()

for i in range(len(a)-1):
    if a[i] == 's' and a[i+1] == 's':
        print("hiss")
        exit()
print("no hiss")