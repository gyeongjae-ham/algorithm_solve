"""
문제

민혁이는 소셜 네트워크 사이트에서 친구를 만드는 것을 좋아하는 친구이다. 우표를 모으는 취미가 있듯이, 민혁이는 소셜 네트워크 사이트에서 친구를 모으는 것이 취미이다.
어떤 사이트의 친구 관계가 생긴 순서대로 주어졌을 때, 두 사람의 친구 네트워크에 몇 명이 있는지 구하는 프로그램을 작성하시오.
친구 네트워크란 친구 관계만으로 이동할 수 있는 사이를 말한다.

입력

첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스의 첫째 줄에는 친구 관계의 수 F가 주어지며, 이 값은 100,000을 넘지 않는다. 다음 F개의 줄에는 친구 관계가 생긴 순서대로 주어진다. 친구 관계는 두 사용자의 아이디로 이루어져 있으며, 알파벳 대문자 또는 소문자로만 이루어진 길이 20 이하의 문자열이다.

출력

친구 관계가 생길 때마다, 두 사람의 친구 네트워크에 몇 명이 있는지 구하는 프로그램을 작성하시오.
"""
# 강의 재수강 필요.
# 최소 신장 트리 부분


def find(x): # 연결하려는 노드의 부모 노드를 찾기 위한 함수
    if x == parent[x]: # x값이 이미 부모노드라면 그대로 return
        return x
    else: # 아니라면
        p = find(parent[x])
        parent[x] = p # 부모노드일 때까지 재귀적으로 찾기
    return parent[x]

def union(x, y): # 찾은 부모노드끼리 연결해주기
    x = find(x)
    y = find(y)
    if x != y: # 두 노드가 다를경우
        parent[y] = x # 연결해 주고
        number[x] += number[y] # 네트워크의 크기 값을 더해주기

test_case = int(input())

for _ in range(test_case):
    parent = dict()
    number = dict()
    f = int(input())
    for _ in range(f):
        x, y = input().split(' ')
        if x not in parent: # 부모노드에 없다면
            parent[x] = x # 추가해주고
            number[x] = 1 # 네트워크 크기는 자기자신이므로 하나
        if y not in parent: # 부모노드에 없다면
            parent[y] = y # 추가해주고
            number[y] = 1 # 네트워크 크기는 자기자신이므로 하나
        union(x, y) # 연결해주기
        print(number[find(x)]) # union이 진행될 때마다 출력해주기(이해가 필요함)