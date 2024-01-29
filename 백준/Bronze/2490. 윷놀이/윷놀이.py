import sys
fi = sys.stdin.readline
                
def solution():
    
    for i in range(3):
        n = list(map(int, fi().split()))

        res = sum(n)
        if res == 0:
            print("D")
        elif res == 3:
            print("A")
        elif res == 2:
            print("B")
        elif res == 1:
            print("C")
        else: print("E")
        
    
if __name__ == '__main__':
    solution()