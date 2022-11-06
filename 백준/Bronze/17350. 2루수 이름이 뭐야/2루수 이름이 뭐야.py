import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = int(input().rstrip())

for i in range(a):
    b = input().rstrip()
    
    if b == 'anj':
        print('뭐야;')
        exit()

print('뭐야?')
exit()