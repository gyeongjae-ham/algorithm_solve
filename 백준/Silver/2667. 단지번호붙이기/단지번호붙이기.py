import sys
input=sys.stdin.readline

n = int(input())
graph=[]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

for _ in range(n):
    graph.append(list(map(int, input().rstrip())))

cnt = 0
def dfs(x,y):
    global cnt
    
    if x < 0 or x >= n or y < 0 or y >= n:
        return False

    if graph[x][y] == 1:
        cnt += 1
        graph[x][y] = 0
        for i in range(4):
            dfs(x+dx[i], y+dy[i])
        return True

apts = []
for i in range(n):
    for j in range(n):
        if dfs(i, j) == True:
            apts.append(cnt)
            cnt = 0

print(len(apts))
apts.sort()
for i in apts:
    print(i)