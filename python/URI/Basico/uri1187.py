# 1187 - area superior

t = input()
soma = 0.0
cont = 0
for i in range(12):
    for j in range(12):
        x = float(input())
        if (j > i and j < 11 - i):
            soma += x
            cont += 1

if (t == 'S'):
    print("{:.1f}".format(soma))
else:
    print("{:.1f}".format(soma/cont))

