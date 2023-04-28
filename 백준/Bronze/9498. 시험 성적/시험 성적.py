import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    a = int(r())
    
    if a > 89: print("A")
    elif a > 79: print("B")
    elif a > 69: print("C")
    elif a > 59: print("D")
    else: print("F")
    
    
solution()