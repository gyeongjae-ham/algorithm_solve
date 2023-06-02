import sys
from collections import deque
from itertools import permutations
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    global n, res, vis, s
    
    n = int(fi().rstrip())
    s = [list(map(int, fi().split())) for _ in range(n)]
    # 팀원 선택 여부 확인하기
    vis = [0] * n
    res = sys.maxsize
    dfs(0, 0)
    
    print(res)

def dfs(depth, idx):
    global res
    
    # 두 명 선택했으면 값 더해서 빼주고 최소값이랑 비교
    if depth == n//2:
        A, B = 0, 0
        # 중복으로 선택안되게 범위 설정하기
        for i in range(n-1):
            for j in range(i, n):
                if vis[i] and vis[j]:
                    A += s[i][j] + s[j][i]
                elif not vis[i] and not vis[j]:
                    B += s[i][j] + s[j][i]
        
        res = min(res, abs(A-B))
        return
    
    for i in range(idx, n):
        if not vis[i]:
            vis[i] = 1
            dfs(depth+1, i+1)
            vis[i] = 0
    
if __name__ == "__main__":
    solution()