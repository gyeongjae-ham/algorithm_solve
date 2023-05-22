import sys
from itertools import combinations
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    n, m = map(int, fi().split())
    city = [list(map(int, fi().split())) for _ in range(n)]
    INF = float("inf")
    
    # 집이랑 치킨집 위치 받기
    house = []
    chk = []
    for i in range(n):
        for j in range(n):
            if city[i][j] == 1: house.append((i, j))
            if city[i][j] == 2: chk.append((i, j))
    
    result = INF
    for x in combinations(chk, m):
        # 도시의 치킨 거리를 담을 변수
        cmd = 0
        # 집마다 돌면서 거리 계산
        for h in house:
            # 가장 짧은 거리를 가진 집의 거리 담을 변수
            hmd = INF
            # x 변수에는 chk 에서 m 만큼 뽑은 조합의 좌표가 들어 있으니까 집마다 그 좌표를 계산
            for k in x:
                hmd = min(hmd, abs(h[0]-k[0])+abs(h[1]-k[1]))
            # 도시에 거리 담아주기
            cmd += hmd
        # 각 조합의 도시 치킨 거리 중 최솟값 찾기
        result = min(result, cmd)
    print(result)
            
if __name__ == '__main__':
    solution()
    
    