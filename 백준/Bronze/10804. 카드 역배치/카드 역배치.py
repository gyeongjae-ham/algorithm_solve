import sys
fi = sys.stdin.readline
                
def solution():
    num = [i for i in range(21)]
    
    for _ in range(10):
        x, y = map(int, fi().split())
        for i in range((y-x+1) // 2):
            num[x+i], num[y-i] = num[y-i], num[x+i]
    
    num.pop(0)
    print(*num)
    
if __name__ == '__main__':
    solution()