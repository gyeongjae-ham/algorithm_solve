import sys
fi = sys.stdin.readline
                
def solution():
    word = list(fi().rstrip())
    stk = []
    
    for _ in range(int(fi().rstrip())):
        c = fi().split()
        if c[0] == 'L' and word:
            stk.append(word.pop())
        elif c[0] == 'D' and stk:
            word.append(stk.pop())
        elif c[0] == 'B' and word:
            word.pop()
        elif c[0] == 'P':
            word.append(c[1])
            
    print(''.join(word + stk[::-1]))
    
if __name__ == '__main__':
    solution()