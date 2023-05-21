import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)

def solution():
    n = int(fi().rstrip())
    arr = [0] * 10002
    
    for i in range(n):
        num = int(fi().rstrip())
        arr[num] += 1
    
    for i in range(1, 10001):
        for j in range(arr[i]):
            print(i)
            
if __name__ == '__main__':
    solution()