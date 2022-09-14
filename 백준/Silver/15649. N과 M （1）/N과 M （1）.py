import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

n,m = map(int, input().split())
arr = [0 for _ in range(10)]
isused = [False]*10

def func(k): # 현재 k개까지 수를 택했음
    if k==m: # m개를 모두 선택했으면
        for i in range(m):
            print(arr[i], end=" ") # arr에 기록해둔 수를 출력
        print()
        return
    
    for i in range(1, n+1): # 1부터 n까지의 수 중에
        if isused[i]==False: # 아직 i가 사용되지 않았으면
            arr[k] = i # k번째 수로 i를 선택하고
            isused[i] = True # i는 이제 사용됐다고 표시
            func(k+1) # 다음 수를 정하러 한 단계 더 들어감
            isused[i] = 0 # k번째 수를 i로 정한 모든 경우를 확인하고 나온거니까 i를 이제 다시 사용안함 표시

func(0)