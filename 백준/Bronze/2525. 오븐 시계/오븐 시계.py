h, m = map(int, input().split())
sm = int(input())

h += sm // 60
m += sm % 60

if m >= 60:
    h += 1
    m -= 60
if h >= 24:
    h -= 24
print(h, m)