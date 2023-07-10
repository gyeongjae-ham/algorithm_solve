import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    arr = []
    for _ in range(n):
        start_mon, start_d, end_mon, end_d = map(int, fi().split())
        arr.append([start_mon*100 + start_d, end_mon*100 + end_d])
    arr.sort()
    
    # 좋아하는 계절 전 꽃이 지는 마지막 날짜
    end_date = 301
    
    # 꽃의 수
    cnt = 0
    
    # 모든 꽃을 확인
    while arr:
        # 정원의 마지막 꽃이 지는 날짜가 12월 1일(좋아하는 계절 넘어간 날짜)이상이거나
        # 현재 확인할 꽃의 시작 날짜가 이전 정원의 꽃의 마지막 날짜랑 이어지지 않으면 종료
        if end_date >= 1201 or arr[0][0] > end_date: break
        
        # 꽃이 피는 날짜가 end_date 이전일 때, 가장 느리게 지는 꽃의 날짜(최대한 적은 꽃을 써야 하니까 -> 그리디)
        tmp = -1
        for _ in range(len(arr)):
            # 꽃이 피는 날짜가 end_date 이전이면
            if arr[0][0] <= end_date:
                # 그 중에서 가장 오래 피어있을 꽃의 날짜를 확인
                if tmp <= arr[0][1]:
                    tmp = arr[0][1]
                
                # 찾은 꽃은 썼으니까 삭제
                arr.remove(arr[0])
            else:
                break
        
        # 마지막 날짜를 최신 날짜로 업데이트
        end_date = tmp
        # 심은 꽃 증가
        cnt += 1
    
    # 마지막 날짜가 1201보다 작으면 1130까지 못 피어있는 거니까 0
    if end_date < 1201: print(0)
    else: print(cnt)
    
if __name__ == '__main__':
    solution()