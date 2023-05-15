import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)

dx = [1,0,-1,0]
dy = [0,1,0,-1]

def upd(x, y, dir):
    # upd 함수 호출될 때 방향 더해질 때 4 넘기 때문에 한번 나눠준다
    dir %= 4
    while True:
        x += dx[dir]
        y += dy[dir]
        
        if not (0 <= x < n and 0 <= y < m): return
        if gr2[x][y] == 6: return
        # 위 조건을 통과하고 0이 아니라면 다른 cctv라는 뜻이므로 그냥 continue
        if gr2[x][y] != 0: continue
        gr2[x][y] = 7

def solution():
    global gr2, n, m
    n, m = map(int, fi().split())
    gr = [list(map(int, fi().split())) for _ in range(n)]
    cctv = []
    mn = 0
    
    for i in range(n):
        for j in range(m):
            # cctv 담기
            if gr[i][j] != 0 and gr[i][j] != 6:
                cctv.append((i,j))
            # 최초 사각지대
            if gr[i][j] == 0: mn += 1
    
    # 4방향이 있는 cctv 들의 부분집합이므로 4의 cctv 갯수 승으로 모든 경우의 수를 확인한다
    for tmp in range((1<<(2*len(cctv)))):
        # 깊은 복사
        # import copy의 copy.deepcopy도 되지만 이 방법이 더 빠르다
        gr2 = [arr[:] for arr in gr]
        
        # tmp값은 모든 방향의 경우의 수 계산하기 위해서 brute 변수에 담아준다
        brute = tmp
        for i in range(len(cctv)):
            # 4진법이므로 4로 나눠서 나머지 값을 구해야 한다
            dir = brute % 4
            # 한 번 나눴으면 일의 자리를 없애준다(10진법에서 모든 자릿수 합 구할 때랑 같다)
            brute = brute // 4
            
            x = cctv[i][0]
            y = cctv[i][1]
            
            # cctv의 타입별로 돌려준다
            if gr[x][y] == 1:
                upd(x, y, dir)
                
            elif gr[x][y] == 2:
                upd(x, y, dir)
                upd(x, y, dir+2)
                
            elif gr[x][y] == 3:
                upd(x, y, dir)
                upd(x, y, dir+1)
                
            elif gr[x][y] == 4:
                upd(x, y, dir)
                upd(x, y, dir+1)
                upd(x, y, dir+2)
                
            else:
                upd(x, y, dir)
                upd(x, y, dir+1)
                upd(x, y, dir+2)
                upd(x, y, dir+3)
        
            val = 0
            for i in range(n):
                for j in range(m):
                    if gr2[i][j] == 0: 
                        val += 1
            mn = min(mn, val)
            
    print(mn)
    
if __name__ == '__main__':
    solution()