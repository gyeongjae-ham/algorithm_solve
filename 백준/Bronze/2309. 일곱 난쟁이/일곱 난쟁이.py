import sys
fi = sys.stdin.readline

def solution():
    heights = [int(fi().rstrip()) for _ in range(9)]
    sumN = sum(heights)
    
    heights.sort()
    
    for i in range(9):
        for j in range(i+1, 9):
            if sumN - heights[i] - heights[j] == 100:
                for k in range(9):
                    if i==k or j==k: continue
                    print(heights[k], end=" ")
                return

if __name__ == "__main__":
    solution()