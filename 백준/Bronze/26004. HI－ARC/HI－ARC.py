import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

N = int(input().rstrip())
word = input().rstrip()
H, I, A, R, C = 0, 0, 0, 0, 0

for i in word :
    if i == 'H' :
        H += 1
    elif i == 'I' :
        I += 1
    elif i == 'A' :
        A += 1
    elif i == 'R' :
        R += 1
    elif i == 'C' :
        C += 1

print(min(H,I,A,R,C))