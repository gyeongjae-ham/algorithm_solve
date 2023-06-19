import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    x = int(fi().rstrip())
    d = [0] * 1000002
    
    for i in range(2, x+1):
        d[i] = d[i-1] + 1
        if i % 2 == 0: d[i] = min(d[i], d[i//2] + 1)
        if i % 3 == 0: d[i] = min(d[i], d[i//3] + 1)
    
    print(d[x])
            
if __name__ == "__main__":
    solution()