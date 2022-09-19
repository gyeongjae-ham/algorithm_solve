def solution(phoneBook):
    phoneBook = sorted(phoneBook)

    # 다른 사람 풀이... Wow!!!
    for p1, p2 in zip(phoneBook, phoneBook[1:]):
        if p2.startswith(p1):
            return False
    return True