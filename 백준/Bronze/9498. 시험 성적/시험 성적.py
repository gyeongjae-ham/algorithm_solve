import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

sc = int(input())

if sc > 89: print("A")
elif sc > 79: print("B")
elif sc > 69: print("C")
elif sc > 59: print("D")
else: print("F")