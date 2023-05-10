import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    global n, isused1, isused2, isused3, cnt
    n = int(fi().rstrip())
    isused1 = [False for _ in range(2*n)]
    isused2 = [False for _ in range(2*n)]
    isused3 = [False for _ in range(2*n)]
    cnt = 0
    func(0)
    print(cnt)

# cur은 퀸이 있는 위치의 행의 값이다
def func(cur):
    global cnt
    if cur == n:
        cnt += 1
        return
    
    for i in range(n):
        if isused1[i] or isused2[cur+i] or isused3[cur-i+n-1]: continue
        
        isused1[i] = True
        isused2[cur+i] = True
        isused3[cur-i+n-1] = True
        func(cur + 1)
        isused1[i] = False
        isused2[cur+i] = False
        isused3[cur-i+n-1] = False
                
if __name__ == '__main__':
    solution()