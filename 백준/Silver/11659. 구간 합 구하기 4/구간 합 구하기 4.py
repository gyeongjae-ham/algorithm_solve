import sys
fi = sys.stdin.readline
                
def solution():
    a = [0] * 100002
    d = [0] * 100002
    
    n, m = map(int, fi().split())
    av = list(map(int, fi().split()))
    
    # 초기값
    d[0] = 0
    for i in range(1, n+1):
        a[i] = av[i-1]
        d[i] = d[i-1] + a[i]
    
    while m > 0:
        x, y = map(int, fi().split())
        # x부터 y값까지의 합이니까 y에서 x-1의 값을 빼면 구할 수 있다
        print(d[y] - d[x-1])
        m -= 1
        
        
if __name__ == '__main__':
    solution()