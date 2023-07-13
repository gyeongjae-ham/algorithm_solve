import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    nums = list(map(int, fi().split()))
    
    ans = 0 
    for num in nums:
        cnt = 0
        if num > 1:
            for j in range(2, num):
                if num % j == 0:
                    cnt += 1
            if cnt == 0: 
                ans += 1
                
    print(ans)
    
if __name__ == '__main__':
    solution()