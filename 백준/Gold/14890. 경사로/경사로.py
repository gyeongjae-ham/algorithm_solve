import sys
from collections import deque
from itertools import permutations
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    global n, l, vis
    n, l = map(int, fi().split())
    gr = [list(map(int, fi().split())) for _ in range(n)]
    res = 0
    
    # 가로 길 확인하기
    for i in range(n):
        vis = [False for _ in range(n)]
        if check(gr[i]): res += 1
    
    # 세로 길 확인하기
    for i in range(n):
        vis = [False for _ in range(n)]
        if check([gr[j][i] for j in range(n)]): res += 1 
            
    print(res)
            
def check(now):
    for j in range(1, n):
        if abs(now[j] - now[j - 1]) > 1: return False # 차이 1 넘으면 설치 X
        # 오르막길에 설치
        if now[j] < now[j - 1]:
            for k in range(l):
                # 경사로를 설치했을 때 범위를 넘어가거나 이미 설치했으면 X, 다음 칸의 높이가 다르면 X
                if j + k >= n or vis[j + k] or now[j] != now[j + k]: return False
                # 높이가 같은 경우
                if now[j] == now[j + k]:
                    vis[j + k] = True
        # 내리막길에 설치할 경우
        elif now[j] > now[j - 1]:
            for k in range(l):
                # 범위를 넘어갔거나, 이미 설치했거나, 다음 칸의 높이가 다른 경우 X
                if j - k - 1 < 0 or now[j - 1] != now[j - k - 1] or vis[j - k - 1]:
                    return False
                if now[j - 1] == now[j - k - 1]:
                    vis[j - k - 1] = True
    # 문제없이 설치한 경우
    return True
if __name__ == "__main__":
    solution()