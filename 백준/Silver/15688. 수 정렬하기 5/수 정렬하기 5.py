import sys
fi = sys.stdin.readline

def solution():
    n = int(fi().rstrip())
    arr = [0] * 2000001
    
    for i in range(n):
        num = int(fi().rstrip())
        arr[num + 1000000] += 1
    
    for i in range(2000001):
        while arr[i]:
            print(i - 1000000)
            arr[i] -= 1
            
if __name__ == '__main__':
    solution()