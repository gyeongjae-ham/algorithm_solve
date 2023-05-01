def solution(arr, queries):
    for c in queries:
        arr[c[0]], arr[c[1]] = arr[c[1]], arr[c[0]]
    
    return arr