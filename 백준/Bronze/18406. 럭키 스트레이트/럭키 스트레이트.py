import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

a = input().rstrip()
sl = len(a)//2

fw = a[:sl]
bw = a[sl:]

fs = 0
bs = 0
for i in range(sl):    
    fs += int(fw[i])
    bs += int(bw[i])

if fs == bs:
    print("LUCKY")
else:
    print("READY")