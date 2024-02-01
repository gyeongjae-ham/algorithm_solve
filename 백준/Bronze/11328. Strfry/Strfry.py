import sys
fi = sys.stdin.readline
                
def solution():
    n = int(fi().rstrip())
    for _ in range(n):
        fl = [0] * 26
        bl = [0] * 26
        f, b = fi().split()
        
        for i in f:
            fl[ord(i)-97] += 1
        for j in b:
            bl[ord(j)-97] += 1
        
        if fl == bl:
            print("Possible")
        else:
            print("Impossible")
    
if __name__ == '__main__':
    solution()