import sys
fi = sys.stdin.readline
                
def solution():
    num = []
    for i in range(5):
        num.append(int(fi().rstrip()))
    num.sort()
    
    avg = sum(num) // len(num)
    miv = num[2]
    
    print(avg)
    print(miv)
    
if __name__ == '__main__':
    solution()