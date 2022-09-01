import sys
input = sys.stdin.readline
from collections import deque

def bfs(r):
    queue = deque()
    queue.append(r)
    res = 1
    visited[r] = res

    while queue:
        v = queue.popleft()
        graph[v].sort()
        
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                res += 1
                visited[i] = res

n, m, r = map(int, input().split())

graph = [[] for _ in range(n+1)]
visited = [0] * (n+1)

for _ in range(m):
    a,b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

bfs(r)

for i in range(1, n+1):
    print(visited[i])