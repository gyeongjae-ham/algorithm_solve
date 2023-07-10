import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    arr = []
    minus = []
    ans = 0
    for _ in range(n):
        x = int(fi().rstrip())
        if x <= 0: minus.append(x)
        # 1은 곱하는 것보다 더하는게 더 최대값이므로
        elif x == 1: ans += 1
        else: arr.append(x)
    
    minus.sort()
    arr.sort(reverse = True)
    
    # 배열 길이가 홀수면 편의상 곱해도 상관없는 1 추가해주기
    if len(arr) % 2 != 0:
        arr.append(1)
    if len(minus) % 2 != 0:
        minus.append(1)
    
    for i in range(0, len(arr), 2):
        ans += (arr[i] * arr[i+1])
    for i in range(0, len(minus), 2):
        ans += (minus[i] * minus[i+1])
    
    print(ans)
            
            
if __name__ == '__main__':
    solution()