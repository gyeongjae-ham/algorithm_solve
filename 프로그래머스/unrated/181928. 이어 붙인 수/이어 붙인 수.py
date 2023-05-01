def solution(num_list):
    eres = ""
    ores = ""
    for i in num_list:
        if i % 2 == 0: 
            eres += str(i)
        else:
            ores += str(i)
    answer = int(eres) + int(ores)
    return answer