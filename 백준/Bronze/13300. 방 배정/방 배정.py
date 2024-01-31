import sys
fi = sys.stdin.readline
                
def solution():
    n,k = map(int, fi().split())
    wl = [0] * 6
    ml = [0] * 6
    for _ in range(n):
        s, g = map(int, fi().split())
        if s == 0:
            wl[g-1] += 1
        else:
            ml[g-1] += 1
    
    answer = 0
    for i in range(len(wl)):
        answer += wl[i] // 2 + wl[i] % 2
        answer += ml[i] // 2 + ml[i] % 2
    print(answer)
    
if __name__ == '__main__':
    solution()