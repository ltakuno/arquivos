# 1181 - linha na matriz

l = int(input())
t = input()

soma = 0
for i in range(12):
    for _ in range(12):
        x = float(input())
        if (i == l):
            soma += x

if (t == 'S'):
    print("{:.1f}".format(soma))
else:
    print("{:.1f}".format(soma/12.0))

