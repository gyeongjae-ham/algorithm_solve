import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

n, r, c = map(int, input().split())
num = 0
while n > 0:
    temp = (2 ** n) // 2
    if n > 1:
        # 2사분면에 있을 경우
        if temp > r and temp <= c: 
            num += temp ** 2
            c -= temp
        # 3사분면에 있을 경우
        elif temp <= r and temp > c:
            num += (temp ** 2) * 2
            r -= temp
        # 4사분면에 있을 경우
        elif temp <= r and temp <= c:
            num += (temp ** 2) * 3
            r -= temp
            c -= temp
    elif n == 1: #재귀용법을 써서 n=1 즉 2^1 x 2^1 만 남았을 때 1,2,3,4 분면에 차례로 0,1,2,3 을 더해준다.
        if r == 0 and c == 1:
            num += 1
        elif r == 1 and c == 0:
            num += 2
        elif r == 1 and c == 1:
            num += 3
    n -= 1
print(num)