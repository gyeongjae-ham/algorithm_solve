import sys
fi = sys.stdin.readline
                
def solution():
    expr = fi().split('-')
    
    ans = 0
    for i in expr[0].split('+'):
        ans += int(i)
    for i in expr[1:]:
        for j in i.split('+'):
            ans -= int(j)
    print(ans)
    
if __name__ == '__main__':
    solution()