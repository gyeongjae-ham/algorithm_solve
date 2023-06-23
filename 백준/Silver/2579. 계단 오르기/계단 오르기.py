import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    d = [[0]*3 for _ in range(302)]
    s = [0] * 302
    
    for i in range(1, n+1):
        s[i] = int(fi().rstrip())
    
    if n == 1:
        print(s[1])
        exit(0)
    
    # 초기값
    d[1][1] = s[1] # 1번째 계단이 첫 계단이니까 s[1]
    d[1][2] = 0 # 1번째 계단이 두번째 계단은 말이 안되므로 0
    d[2][1] = s[2] # 2번째 계단이 첫 계단이므로 s[2]
    d[2][2] = s[1] + s[2] # 2번째 계단이 두 번째 계단이므로, s[2-1] + s[2]
    
    for i in range(3, n+1):
        d[i][1] = max(d[i-2][1], d[i-2][2]) + s[i]
        d[i][2] = d[i-1][1] + s[i]
        
    print(max(d[n][1], d[n][2]))
    
if __name__ == '__main__':
    solution()