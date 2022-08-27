input = list(map(int, input().split()))

a = [i for i in range(1, 9)]
d = [i for i in range(8, 0, -1)]

if input == a:
    print("ascending")
elif input == d:
    print("descending")
else:
    print("mixed")