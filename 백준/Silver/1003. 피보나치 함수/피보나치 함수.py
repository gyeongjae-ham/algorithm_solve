import sys
fi = sys.stdin.readline
                
def solution():
    d = [0] * 42
    # 0, 1, 2 호출 할 때 호출되는 횟수 초기값
    zero = [1, 0, 1]
    one = [0, 1, 1]
    
    t = int(fi().rstrip())
    
    for i in range(3, 41):
        zero.append(zero[i-1] + zero[i-2])
        one.append(one[i-1] + one[i-2])
        
    while t > 0:
        n = int(fi().rstrip())
        print(f'{zero[n]} {one[n]}')
        t -= 1

if __name__ == '__main__':
    solution()