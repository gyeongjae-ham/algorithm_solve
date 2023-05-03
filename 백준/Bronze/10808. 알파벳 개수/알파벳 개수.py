import sys
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    arr = [0]*26
    word = r().rstrip()
    for c in word:
        arr[ord(c)-97]+=1
    
    print(*arr)
    
solution()