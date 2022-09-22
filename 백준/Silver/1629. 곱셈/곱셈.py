import sys
input = sys.stdin.readline

# 2^10 = 2^5 * 2^5 의 성질을 이용한다.

def div(x, y):
    if y == 1: # b의 값이 1이면 a % C를 return한다.
        return x % c
    else:
        temp = div(x, y // 2) # a^(b // 2)를 미리 구한다.
        if y % 2 == 0:
            return temp * temp % c # b가 짝수인 경우
        else:
            return temp * temp * x % c # b가 홀수인 경우


if __name__ == "__main__":
    a, b, c = map(int, input().split())

    result = div(a, b)
    print(result)