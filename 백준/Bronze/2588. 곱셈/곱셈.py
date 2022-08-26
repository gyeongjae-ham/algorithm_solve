import sys
input = sys.stdin.readline

a = int(input())
b = int(input())

f = b%10
s = int(((b%100)-(b%10))/10)
t = b//100

print(a*f)
print(a*s)
print(a*t)
print(a*b)