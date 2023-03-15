import sys
input = sys.stdin.readline
print = sys.stdout.write
sys.setrecursionlimit(10**6)

n = int(input().rstrip())
for i in range(n) :
	left = []
	right = []
	s = input().rstrip()
	for c in s:
		if c == '<':
			if left:
				right.append(left.pop())
		elif c == '>':
			if right:
				left.append(right.pop())
		elif c == '-' :
			if left:
				left.pop()
		else :
			left.append(c)
	print(''.join(left) + ''.join(reversed(right)) + '\n')