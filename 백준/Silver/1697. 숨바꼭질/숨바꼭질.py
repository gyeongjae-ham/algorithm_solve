import sys
from collections import deque
input = sys.stdin.readline()

max = 100000
n,k = map(int,input.split())
visited = [0] * (max+1)

def bfs():
    q = deque()
    q.append(n)
    
    while q:
        x = q.popleft()
        if x == k:
            print(visited[x])
            break

        for j in (x+1, x-1, x*2):
            if 0<=j<=max and not visited[j]:
                visited[j] = visited[x] + 1
                q.append(j)

bfs()
