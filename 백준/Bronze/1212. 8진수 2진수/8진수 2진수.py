import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

print(bin(int(input(), 8))[2:])