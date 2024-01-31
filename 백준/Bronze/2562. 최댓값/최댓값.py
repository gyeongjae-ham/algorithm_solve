import sys
fi = sys.stdin.readline
                
def solution():
    num = [int(fi().rstrip()) for _ in range(9)]
    
    print(max(num))
    print(num.index(max(num))+1)
    
if __name__ == '__main__':
    solution()