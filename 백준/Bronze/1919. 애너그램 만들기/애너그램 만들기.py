import sys
fi = sys.stdin.readline
                
def solution():
    fl = [0] * 26
    bl = [0] * 26
    f = fi().rstrip()
    b = fi().rstrip()
    
    for i in f:
        fl[ord(i)-97] += 1
    for j in b:
        bl[ord(j)-97] += 1
    
    answer = 0
    for i in range(len(fl)):
        if fl[i] != bl[i]:
            bn = max(fl[i], bl[i])
            ln = min(fl[i], bl[i])
            
            answer += bn - ln 
    
    print(answer)
    
if __name__ == '__main__':
    solution()