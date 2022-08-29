n = int(input())
rest = 1000 - n
types = [500, 100, 50, 10, 5, 1]
res = 0

for coin in types:
    if rest == 0:
        break
    
    res += rest // coin
    rest %= coin
    
print(res)