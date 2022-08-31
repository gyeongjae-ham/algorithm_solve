import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n, m, start = map(int, input().split())

graph = [[] for _ in range(n+1)]
visited = [0] * (n+1)

for _ in range(m):
    a,b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

res = 1
def dfs(start):
    global res
    visited[start] = res
    graph[start].sort(reverse=True)

    for i in graph[start]:
        if visited[i] == 0:
            res += 1
            dfs(i)

dfs(start)

for i in range(1, n+1):
    print(visited[i])