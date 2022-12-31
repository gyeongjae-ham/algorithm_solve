import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

while True :
  n = input().rstrip()
  if n == '#' :
    break
  a = n[0]
  b = n[2::]
  res = b.count(a) + b.count(a.upper())
  print(a, res)