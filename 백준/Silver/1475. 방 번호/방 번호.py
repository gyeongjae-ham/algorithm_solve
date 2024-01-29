import sys
fi = sys.stdin.readline
                
def solution():
    n = fi().rstrip()
    res = [0] * 10
    
    for i in n:
        if int(i) == 6 or int(i) == 9:
            if res[6] > res[9]: res[9] += 1
            else: res[6] += 1
        else:
            res[int(i)] += 1
        
    print(max(res))
        
    
if __name__ == '__main__':
    solution()