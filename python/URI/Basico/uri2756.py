# 2756 - saida 10
v = [('A',7,0) , ('B', 6, 1), ('C', 5, 3), ('D', 4, 5), ('E', 3, 7)]
for t in v:
    if t[2] == 0:
        print(t[1] * ' ' + t[0])
    else:
        print(t[1] * ' ' + t[0] + t[2] * ' ' + t[0])


for t in reversed(v[:4]):
    if t[2] == 0:
        print(t[1] * ' ' + t[0])
    else:
        print(t[1] * ' ' + t[0] + t[2] * ' ' + t[0])
