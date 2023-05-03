import sys
from collections import deque
r = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solution():
    p, k = map(int, r().split())
    people = deque()
    ans = []
    # 사람 수 초기화 해주고
    for i in range(1, p+1): people.append(i)
    
    # 사람 없을 때까지
    while people:
        # k번째 찾을 때까지 원모양이니까 맨 뒤에 다시 붙여주기
        for _ in range(k-1):
            people.append(people.popleft())
        
        # k-1까지 돌았으니까 지금 queue에서 맨 앞 사람은 k번째이므로 ans에 추가
        # 그리고 사람 원에서 제거
        ans.append(people.popleft())
    # 출력 예제에 맞게 괄호 모양 변경해주기
    print(str(ans).replace("[", "<").replace("]",">"))
    
solution()