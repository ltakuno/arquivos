# 1182 - coluna na matriz

c = int(input())
t = input()

soma = 0
for _ in range(12):
    for j in range(12):
        x = float(input())
        if (j == c):
            soma += x

if (t == 'S'):
    print("{:.1f}".format(soma))
else:
    print("{:.1f}".format(soma/12.0))

