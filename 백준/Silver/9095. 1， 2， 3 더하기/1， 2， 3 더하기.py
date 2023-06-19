import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    t = int(fi().rstrip())
    
    d = [0] * 20
    # 초기값을 설정
    d[1] = 1
    d[2] = 2
    d[3] = 4
    
    # 해당하는 값들을 미리 구해줌
    for i in range(4, 11):
        d[i] = d[i-1] + d[i-2] + d[i-3]
    
    while t > 0:
        x = int(fi().rstrip())
        print(d[x])
        t -= 1
            
if __name__ == "__main__":
    solution()