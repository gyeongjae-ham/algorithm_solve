import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
s = input().rstrip()

if s.count("s") == s.count("t"):
    print(s)
    exit()
    
for i in range(len(s)):
    tmp = s[i+1:]
    if tmp.count("s") == tmp.count("t"):
        print(tmp)
        break