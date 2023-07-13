import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    
    num = 2
    while n != 1:
        if n % num == 0:
            print(num)
            n //= num
            num = 2
        else: num += 1
    
if __name__ == '__main__':
    solution()