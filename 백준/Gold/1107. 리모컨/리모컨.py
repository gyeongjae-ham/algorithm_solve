import sys
input = lambda: sys.stdin.readline().rstrip()

def solution():
    n = int(input())
    m = int(input())
    
    if m == 0:
        buttons = []
    else:
        buttons = list(map(int, input().split()))
        
    # 지금 채널 위치가 100이니까 빼서 +,-로만 이동하는 최대값을 구해준다
    ans = abs(100 - n)
    
    for i in range(1000001):
        num = str(i)
        
        # 지금 번호를 눌러서 이동할 수 있는지 검사
        for j in num:
            if int(j) in buttons:
                # 버튼이 고장나서 지금 번호로 이동 못하면 의미없으니까 스탑
                break
        else: # 버튼 눌러서 만들 수 있는 경우엔
            ans = min(ans, len(num) + abs(int(num) - n))

    print(ans)
    
if __name__ == "__main__":
    solution()