def solution(l, r):
    answer = []
    for i in range(l, r+1):
        flag = True
        num = i
        while num:
            if num % 10 != 5 and num % 10 != 0:
                flag = False
                break
            num //= 10
            
        if flag: 
            answer.append(i)
        
    if len(answer): return answer
    else: return [-1]