import sys
fi = sys.stdin.readline
                
def solution():
    d = [0] * 1005
    modv = 10007
    n = int(fi().rstrip())
    
    d[1] = 1
    d[2] = 3
    
    # 타일 시작을 2*1로 채우면 맨 왼쪽 타일 한줄이 사라지므로 d[n-1]
    # 시작을 1*2로 채우면 왼쪽 아래쪽 1*2밖에 못채우고 나머지는 d[n-2]
    # 시작을 2*2도 1*2랑 똑같으니까 *2?
    for i in range(3, n+1):
        # 숫자가 커질수도 있으니가 어차피 mod 값 구하니까 미리 나눠서 구해놓자
        d[i] = (d[i-1] + (d[i-2]*2)) % modv
    
    print(d[n])
    
    
if __name__ == '__main__':
    solution()