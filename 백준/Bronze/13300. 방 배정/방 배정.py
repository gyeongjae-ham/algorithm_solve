import sys
fi = sys.stdin.readline
                
def solution():
    n,k = map(int, fi().split())
    cnt = [[0,0,0,0,0,0],[0,0,0,0,0,0]] 
    for _ in range(n):
        s, g = map(int, fi().split())
        cnt[s][g-1] += 1
    
    answer = 0
    for i in cnt:
        for j in i:
            if j % k == 0:
                answer += j // k
            else:
                answer += j // k + 1
    print(answer)
    
if __name__ == '__main__':
    solution()