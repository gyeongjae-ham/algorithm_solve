def solution(absolutes, signs):
    number = []
    for i in range(len(absolutes)):
        if signs[i] == 'false':
            number.append(absolutes[i]*-1)
        else:
            number.append(absolutes[i])
    print(number)
    answer = sum(number)
    return answer

absolutes = [4,7,12]
signs = ['true', 'false', 'true']

solution(absolutes, signs)