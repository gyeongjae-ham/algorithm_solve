import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = int(input().rstrip(),2)
b = int(input().rstrip(),2)
n = 100000
ma = 2 ** n - 1
print(bin(a&b)[2:].zfill(n))
print(bin(a|b)[2:].zfill(n))
print(bin(a^b)[2:].zfill(n))
print(bin(a^ma)[2:].zfill(n))
print(bin(b^ma)[2:].zfill(n))