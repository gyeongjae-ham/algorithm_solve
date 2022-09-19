def solution(nums):
    answer = 0
    dict={}
    for n in nums:
        dict[n] = 1

    # 절반이 종류보다 적으면 그 개수만큼의 종류밖에 못 뽑으니까 return
    if len(nums) // 2 <= len(dict):
        return len(nums) // 2
    # 아니라면 종류의 개수를 return
    return len(dict)