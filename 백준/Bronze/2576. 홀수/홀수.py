import sys
fi = sys.stdin.readline
                
def solution():
    
    answer = 0
    minnu = sys.maxsize
    for i in range(7):
        n = int(fi().rstrip())
        
        if n % 2 != 0:
            answer += n
            minnu = min(minnu, n)
    
    if answer == 0:
        print(-1)
    else:
        print(answer)
        print(minnu)
        
if __name__ == '__main__':
    solution()