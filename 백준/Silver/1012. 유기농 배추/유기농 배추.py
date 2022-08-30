import sys
input = sys.stdin.readline
sys.setrecursionlimit(1000000)

def dfs(x,y):
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    
    if x < 0 or x >=n or y < 0 or y >= m:
        return False

    if graph[x][y] == 1:
        graph[x][y] = 0

        for i in range(4):
            dfs(x+dx[i], y+dy[i])

        return True
    return False

t = int(input())

for _ in range(t): 

    m, n, k = map(int, input().split())
    graph = [[0]*m for _ in range(n)]

    for _ in range(k):
        a,b = map(int, input().split())
        graph[b][a] = 1

    cnt = 0
    for i in range(n):
        for j in range(m):
            if dfs(i,j) == True:
                cnt+=1

    graph = [[0]*m for _ in range(n)]
    print(cnt)