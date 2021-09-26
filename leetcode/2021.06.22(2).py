# 소수 만들기
# 주어진 숫자 중 3개의 수를 더했을 때 소수가 되는 경우의 개수를 구하려고 합니다. 숫자들이 들어있는 배열 nums가 매개변수로 주어질 때, nums에 있는 숫자들 중 서로 다른 3개를 골라 더했을 때 소수가 되는 경우의 개수를 return 하도록 solution 함수를 완성해주세요.

# 제한사항
# nums에 들어있는 숫자의 개수는 3개 이상 50개 이하입니다.
# nums의 각 원소는 1 이상 1,000 이하의 자연수이며, 중복된 숫자가 들어있지 않습니다.

# 입출력 예
#    nums	      result
# [1,2,3,4]	        1
# [1,2,7,6,4]	    4

# 입출력 예 설명
# 입출력 예 #1
# [1,2,4]를 이용해서 7을 만들 수 있습니다.

# 입출력 예 #2
# [1,2,4]를 이용해서 7을 만들 수 있습니다.
# [1,4,6]을 이용해서 11을 만들 수 있습니다.
# [2,4,7]을 이용해서 13을 만들 수 있습니다.
# [4,6,7]을 이용해서 17을 만들 수 있습니다.


# 풀이법 1(내 풀이)
import itertools
import math

def solution(nums):

    coms = itertools.combinations(nums, 3)
    sums = []
    for i in coms:
        sums.append(sum(i))

    answer = 0
    for i in sums:
        count = 0
        for j in range(2, math.ceil(math.sqrt(i))+1):
            if i % j == 0:
                count += 1
        if count == 0:
            answer += 1
    return answer

# 풀이법 2(내 풀이 boolean and continue)
import itertools
import math

def solution(nums):

    coms = itertools.combinations(nums, 3)
    sums = []
    for i in coms:
        sums.append(sum(i))

    answer = 0
    for i in sums:
        is_answer = True
        for j in range(2, math.ceil(math.sqrt(i))+1):
            if i % j == 0:
                is_answer = False
                continue
        if is_answer:
            answer += 1
    return answer

# 풀이법 3(내 풀이 boolean and break) 
import itertools
import math

def solution(nums):

    coms = itertools.combinations(nums, 3)
    sums = []
    for i in coms:
        sums.append(sum(i))

    answer = 0
    for i in sums:
        is_answer = True
        for j in range(2, math.ceil(math.sqrt(i))+1):
            if i % j == 0:
                is_answer = False
                break
        if is_answer:
            answer += 1
    return answer

# 풀이법 4(내 풀이 list comprehension 적용) // 가장 빠른 로직
import itertools
import math

def solution(nums):

    coms = itertools.combinations(nums, 3)
    sums = [sum(i) for i in coms]

    answer = 0
    for i in sums:
        is_answer = True
        for j in range(2, math.ceil(math.sqrt(i))+1):
            if i % j == 0:
                is_answer = False
                break
        if is_answer:
            answer += 1
    return answer