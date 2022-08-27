n = int(input())
scores = list(map(int, input().split()))

mn = max(scores)
for i in range(len(scores)):
    scores[i] = (scores[i]/mn)*100

res = 0
for i in scores:
    res += i

print(res/len(scores))