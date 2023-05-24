import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    n = int(fi().rstrip())
    dic = {}

    for case in range(n):
        tmp = int(fi().rstrip())
        if tmp in dic:
            dic[tmp] += 1
        else:
            dic[tmp] = 1

    dic = sorted(dic.items(), key=lambda x: (-x[1], x[0]))
    print(dic[0][0])
        
if __name__ == "__main__":
    solution()