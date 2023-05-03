def solution(arr, queries):
    answer = [float('inf') for _ in range(len(queries))]
    for i in range(len(queries)):
        for j in range(queries[i][0], queries[i][1]+1):
            if arr[j] > queries[i][2]:
                answer[i] = min(answer[i], arr[j])
        
        if answer[i] == float('inf'): answer[i] = -1
            
    return answer