def solution(participant, completion):
    dict = {}
    temp = 0
    for i in participant:
        dict[hash(i)] = i
        temp += int(hash(i))
    for j in completion:
        temp -= int(hash(j))
    
    return dict[temp]