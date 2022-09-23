import sys
input = sys.stdin.readline

while True:
    try:
        n = int(input().rstrip())
    except:
        break
    
    num = ''
    while True:
        num += '1'
        if int(num) % n == 0:
            break
    print(len(num))