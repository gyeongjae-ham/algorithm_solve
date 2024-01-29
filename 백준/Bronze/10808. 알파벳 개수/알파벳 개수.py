import sys
fi = sys.stdin.readline
                
def solution():
    res = [0 for i in range(26)]
    w = fi().rstrip()
    w.lower()
    for i in w:
        res[ord(i)-97] += 1
    
    print(*res)
    
if __name__ == '__main__':
    solution()