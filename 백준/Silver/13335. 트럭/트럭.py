import sys
fi = sys.stdin.readline
sys.setrecursionlimit(10**6)
                
def solution():
    n, w, l = map(int, fi().split())
    ts = list(map(int, fi().split()))
    
    truck = [0] * w
    time = 0
    while len(truck):
        time += 1
        truck.pop(0)
        if ts:
            if sum(truck) + ts[0] <= l:
                truck.append(ts.pop(0))
            else:
                truck.append(0)
    print(time)
        
            
        
if __name__ == "__main__":
    solution()