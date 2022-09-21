import sys; input = sys.stdin.readline
import copy

def dfs(graph, depth):
    global answer
    # 종료 조건: cctv 개수 만큼 돌았을 때
    if depth == len(cctv):
        # 사각지대 최솟값 찾기
        answer = min(answer, count_zero(graph))
        return
    
    else:
        # 사무실 그래프를 깊은 복사해오기(재귀 돌리려고 임시 변수처럼 할당)
        tmp = copy.deepcopy(graph)
        x,y,c = cctv[depth]
        for dir in cctv_direction[c]:
            # cctv 타입에 따라서 감시영역 호출
            watch(x,y,dir,tmp)
            # 현재 경우에서 다른 모든 cctv 재귀 탐색
            dfs(tmp, depth+1)
            # cctv를 회전시키고 재탐색 위해서 초기화
            tmp = copy.deepcopy(graph)

def watch(x,y,dir,graph):
    for d in dir:
        nx, ny = x,y
        # 범위 내에서 모두 탐색
        while True:
            nx += direction_list[d][0]
            ny += direction_list[d][1]
            # 맵 내에서
            if nx < 0 or nx >= n or ny < 0 or ny >= m or graph[nx][ny] == 6:
                break
            if graph[nx][ny] == 0:
                graph[nx][ny] = '#'

# 사각지대 개수 구하기
def count_zero(graph):
    cnt = 0
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 0:
                cnt+=1
    return cnt

if __name__ == '__main__':
    n,m = map(int, input().split())
    graph = [list(map(int, input().split())) for _ in range(n)]
    # 최솟값을 찾기 위해서 answer는 큰 수로 세팅
    answer = 1e9
    
    # cctv를 찾아서 담아주고
    cctv = []
    for i in range(n):
        for j in range(m):
            if graph[i][j] != 0 and graph[i][j] != 6:
                cctv.append((i,j,graph[i][j]))
    
     # 탐색 방향: 상, 하, 좌, 우
    direction_list = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    # CCTV별 이동 가능한 방향
    cctv_direction = [
        [],
        [[0], [1], [2], [3]], # 1번 CCTV
        [[0, 1], [2, 3]], # 2번 CCTV
        [[0, 2], [0, 3], [1, 2], [1, 3]], # 3번 CCTV
        [[0, 1, 2], [0, 1, 3], [0, 2, 3], [1, 2, 3]], # 4번 CCTV
        [[0, 1, 2, 3]] # 5번 CCTV
    ]
    
    dfs(graph, 0)
    print(answer)