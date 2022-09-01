w = input()

types = ["c=","c-","dz=","d-","lj","nj","s=","z="]

for i in types:
    if w.find(i) != -1:
        w= w.replace(i, "*")

print(len(w))
