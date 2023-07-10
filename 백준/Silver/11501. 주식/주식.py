import sys
fi = sys.stdin.readline
                
def solution():
    t = int(fi().rstrip())
    while t:
        t -= 1
        n = int(fi().rstrip())
        arr = list(map(int, fi().split()))
        arr.reverse()
        
        max_price = arr[0]
        ans = 0
        for i in range(1, n):
            # 최고가보다 더 큰 값이면 바꿔준다
            if max_price < arr[i]:
                max_price = arr[i]
                continue
            
            ans += max_price - arr[i]
        print(ans)
            
if __name__ == '__main__':
    solution()