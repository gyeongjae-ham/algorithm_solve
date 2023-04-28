def solution(k, score):
    answer = []
    arr=[]
    for v in score:
        if len(arr) < k:
            arr.append(v)
        else:
            if min(arr) < v:
                arr.remove(min(arr))
                arr.append(v)
        answer.append(min(arr))
        
    return answer