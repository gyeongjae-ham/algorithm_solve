import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def recur(len, idx):
    # 길이가 원하는 길이가 되면
    if len == l:
        vo = 0
        co = 0
        # 자음과 모음 개수를 저장하고
        for i in arr:
            if i in 'aeiou': vo+=1
            else: co+=1
        # 자음과 모음 개수가 조건을 충족하면 출력하고 종료
        if vo >= 1 and co >= 2:
            print(''.join(arr))
        return
    
    # 백트래킹
    for i in range(idx, c):
        if check[i] == 0:
            arr.append(s[i])
            check[i] = 1
            recur(len+1, i+1)
            check[i] = 0
            del arr[-1]

l,c = map(int, input().split())
check = [0 for _ in range(c)]
arr = []
s = input().split()
s.sort()
recur(0,0)