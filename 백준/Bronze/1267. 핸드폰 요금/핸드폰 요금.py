import sys
fi = sys.stdin.readline
                
def solution():
    t = int(fi().rstrip())
    times = list(map(int, fi().split()))
    answer = 0
    y = 0 
    m = 0
    
    for i in times:
        y += ((i//30)+1) * 10
        m += ((i//60)+1) * 15
    
    if y > m:
        print("M", m)
    elif y == m:
        print("Y M", m)
    else:
        print("Y", y)
    
if __name__ == '__main__':
    solution()