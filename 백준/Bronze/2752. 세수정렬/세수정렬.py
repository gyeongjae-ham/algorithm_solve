import sys
fi = sys.stdin.readline

def solution():
    nums = list(map(int, fi().split()))
    nums.sort()
    print(*nums, sep=' ')
    
if __name__ == '__main__':
    solution()