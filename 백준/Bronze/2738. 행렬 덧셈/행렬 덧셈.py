import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

a,b = map(int, input().split())

array1 = []
array2 = []
result = [[] for _ in range(a)]

for i in range(a):
    array1.append(list(map(int, input().split())))
for i in range(a):
    array2.append(list(map(int, input().split())))
    
for i in range(a):
    for j in range(b):
        result[i].append(array1[i][j] + array2[i][j])

for i in result:
    print(*i)