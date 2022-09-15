import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def func(k):
    if len(s)==m:
        print(' '.join(map(str,s)))
        return
    
    # 오름차순이어야 하므로 이미 들어간 수를 제외한 범위
    for i in range(k, n+1):
        if visited[i]:
            continue
        visited[i] = True
        s.append(i)
        func(i+1)
        s.pop()
        visited[i] = False

n,m = map(int, input().split())
s = []
visited = [False] * (n+1)
func(1)