import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = [0] * 26

s1 = input().rstrip()
s2 = input().rstrip()

for i in s1:
    a[ord(i)-97] += 1
for j in s2:
    a[ord(j)-97] -= 1
    
sum = 0
for k in a: sum += abs(k)
print(sum)