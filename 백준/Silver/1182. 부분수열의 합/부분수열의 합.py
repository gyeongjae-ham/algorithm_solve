import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, s, arr, cnt
    n, s = map(int, fi().split())
    arr = list(map(int, fi().split()))
    cnt = 0
    
    func(0, 0)
    if s == 0: cnt -= 1
    print(cnt)

# cur은 퀸이 있는 위치의 행의 값이다
def func(cur, tot):
    global cnt
    if cur == n:
        if tot == s: cnt += 1
        return
    
    func(cur+1, tot)
    func(cur+1, tot + arr[cur])
                
if __name__ == '__main__':
    solution()