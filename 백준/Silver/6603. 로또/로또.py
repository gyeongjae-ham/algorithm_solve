import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**8)

def solution():
    global k, s, arr, isused
    while True:
        n = list(map(int, fi().split()))
        
        if n[0] == 0: break
            
        k = n[0]
        s = n[1:]
        s.sort()
        arr = [0 for _ in range(6)]
        isused = [False for _ in range(50)]
        
        func(0, 0)
        print()

def func(cur, st):
    if cur == 6:
        for i in range(6):
            print(s[arr[i]], end=" ")
        print()
        return
    
    for i in range(st, k):
        if not isused[i]:
            arr[cur] = i
            isused[i] = True
            func(cur + 1, i)
            isused[i] = False
                
if __name__ == '__main__':
    solution()