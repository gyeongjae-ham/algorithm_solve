import sys
fi = sys.stdin.readline
                
def solution():
    t = int(fi().rstrip())
    
    for _ in range(t):
        c = fi().rstrip()
        tmp = []
        cl = []
        for i in c:
            if i == '<' and tmp:
                cl.append(tmp.pop())
            elif i == '>' and cl:
                tmp.append(cl.pop())
            elif i == '>' and not cl:
                continue
            elif i == '<' and not tmp:
                continue
            elif i == '-' and tmp:
                tmp.pop()
            elif i == '-' and not tmp:
                continue
            else:
                tmp.append(i)
        
        print("".join(tmp), "".join(cl[::-1]), sep="")
    
if __name__ == '__main__':
    solution()