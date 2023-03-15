import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

MX = 1000005

dat = [0] * MX
pre = [-1] * MX
nxt = [-1] * MX
unused = 1

def insert(addr, num):
    global unused
    dat[unused] = num
    pre[unused] = addr
    nxt[unused] = nxt[addr]
    if nxt[addr] != -1: pre[nxt[addr]] = unused
    nxt[addr] = unused
    unused += 1

def erase(addr):
    nxt[pre[addr]] = nxt[addr]
    if nxt[addr] != -1: pre[nxt[addr]] = pre[addr]
    
def traversal():
    cur = nxt[0]
    while cur != -1:
        print(dat[cur], end='')
        cur = nxt[cur]
        
s = input().rstrip()
cursor = 0
for c in s:
    insert(cursor, c)
    cursor+=1

n = int(input().rstrip())
while n > 0:
    nc = input().rstrip().split()
    if nc[0]=='P':
        insert(cursor, nc[1])
        cursor = nxt[cursor]
    elif nc[0]=='L':
        if pre[cursor] != -1: cursor = pre[cursor]
    elif nc[0]=='D':
        if nxt[cursor] != -1: cursor = nxt[cursor]
    else:
        if pre[cursor] != -1:
            erase(cursor)
            cursor = pre[cursor]
    n-=1
            
traversal()