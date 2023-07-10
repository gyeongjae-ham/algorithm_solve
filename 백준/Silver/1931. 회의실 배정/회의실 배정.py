import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    arr = [list(map(int, fi().split())) for _ in range(n)]
    # print(*arr, sep=" ")
    # 회의가 끝나는 시간 순으로 나열해서 
    # 현재 시간 이후 회의 중 가장 빠른 회의를 선택할 수 있도록 한다
    arr.sort(key = lambda x: (x[1], x[0]))
    # print(*arr, sep=" ")
    
    ans = 0
    t = 0
    for i in range(n):
        # 현재 회의 중이라면 스킵
        if t > arr[i][0]: continue
        # 현재 회의 다음이라면 회의 추가해주고
        # 시간 해당 회의 끝나는 시간으로 변경
        ans += 1
        t = arr[i][1]
    
    print(ans)
    
if __name__ == '__main__':
    solution()