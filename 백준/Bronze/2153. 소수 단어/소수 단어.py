import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

import math

word = input().rstrip()

total = 0
for c in word:
    if c.islower():
        total += ord(c) - 96
    else:
        total += ord(c) - 38

ip = True
for i in range(2, int(math.sqrt(total)) + 1):
    if total % i == 0:
        ip = False

if ip:
    print('It is a prime word.')
else:
    print('It is not a prime word.')