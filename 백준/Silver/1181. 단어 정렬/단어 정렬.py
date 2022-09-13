import sys
input=sys.stdin.readline

n = int(input())
words = []
for _ in range(n):
    words.append(input().rstrip())

set_list = list(set(words))
set_list.sort()
set_list.sort(key=len)

for i in set_list:
    print(i)