import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)

note = [[0] * 42 for _ in range(42)]

def rotate():
    global paper, r, c
    # python 2차원 배열 90도 회전 시계방향
    tmp = list(map(list, zip(*paper[::-1])))
    paper = [arr[:] for arr in tmp]
    r, c = c, r
    
def pastable(x, y):
    global r, c
    for i in range(r):
        for j in range(c):
            if note[x+i][y+j] == 1 and paper[i][j] == 1: return False
    
    for i in range(r):
        for j in range(c):
            if paper[i][j] == 1: note[x+i][y+j] = 1
    
    return True

def solution():
    global paper, r, c
    n, m, k = map(int, fi().split())
    
    while k > 0:
        k -= 1
        r, c = map(int, fi().split())
        paper = [list(map(int, fi().split())) for _ in range(r)]
        
        for rot in range(4):
            is_paste = False
            # 범위를 정할 때 주의할 점
            # 만약 노트북 n, m이 5이고, 스티커가 3이라면 0,0 부터 붙였을 때, 스터커 크기때문에
            # 0, 1, 2까지 밖에 못붙인다
            for x in range(n-r+1):
                if is_paste == True: break
                for y in range(m-c+1):
                    if pastable(x, y):
                        is_paste = True
                        break
            if is_paste: break
            rotate()
        
        cnt = 0
        for i in range(n):
            for j in range(m):
                cnt += note[i][j]
    print(cnt)
        
if __name__ == '__main__':
    solution()