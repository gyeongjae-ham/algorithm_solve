import sys, re
input = sys.stdin.readline

num = int(input().rstrip())
s,e = input().rstrip().split("*")
pt = re.compile(s+".*"+e+"+") # s.*e+ .은 문자열 아무거나 올 수 있다. +는 1개이상 있어야 한다

for i in range(num):
    word = input().rstrip()
    a = pt.search(word) # 정규표현식 search 메서드를 사용하면 해당 식에 부합하는지 확인
    # 부합하고, group()하면 부합하는 문자열을 만들어 주고 그게 word랑 일치하는지 확인
    if a and a.group() == word:
        print("DA")
    else:
        print("NE")