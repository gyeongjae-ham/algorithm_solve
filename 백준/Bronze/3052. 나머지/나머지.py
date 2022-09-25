import sys
input = sys.stdin.readline

a = []

for i in range(10):
    num = int(input().rstrip())
    a.append(num%42)
print(len(set(a)))