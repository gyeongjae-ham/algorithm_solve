import sys
input = sys.stdin.readline

a = int(input())
b = input()

f = a*int(b[2])
s = a*int(b[1])
t = a*int(b[0])

print(f,s,t,a*int(b), sep="\n")