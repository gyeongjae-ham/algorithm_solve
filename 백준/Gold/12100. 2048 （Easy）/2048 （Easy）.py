import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)
    
def solution():
    global br2, n
    n = int(fi().rstrip())
    br1 = [list(map(int, fi().split())) for _ in range(n)]
    
    mx = 0
    for tmp in range(1<<(2*5)):
        br2 = br1[:]
        brute = tmp
        for i in range(5):
            dir = brute % 4
            brute = brute // 4
            tilt(dir)
        
        for i in range(n):
            for j in range(n):
                mx = max(mx, br2[i][j])
    print(mx)
    
def rotate():
    global br2
    tmp = list(map(list, zip(*br2[::-1])))
    br2 = tmp[:]

def tilt(dir):
    global br2, n
    while dir > 0:
        # 방향 만큼 돌려주기
        rotate()
        dir -= 1
    
    for i in range(n):
        # 돌리고 난 후 합칠 배열 선언 한 행씩 계산
        tilted = [0] * n
        idx = 0
        for j in range(n):
            # 해당 칸에 숫자가 없다면 스킵
            if br2[i][j] == 0: continue
            # 돌린 후 배열에 해당 인덱스 위치가 비어 있다면 숫자 넣어주기
            if tilted[idx] == 0:
                tilted[idx] = br2[i][j]
            # 돌린 후 배열 숫자와 돌리기 전 배열 숫자가 같다면
            elif tilted[idx] == br2[i][j]:
                # 두배로 만들어 주고(합쳤으니까)
                tilted[idx] *= 2
                # 인덱스 늘려주기
                idx += 1
            # 합칠 수 없는 숫자라면(이미 합친 숫자이거나 다른 숫자) 그 다음 칸에 숫자 넣어주기
            else:
                idx += 1
                tilted[idx] = br2[i][j]
        # 합친 배열로 해당 행 교체해주기
        br2[i] = tilted[:]
            
if __name__ == '__main__':
    solution()