# 1159 - soma de pares consecutivos
n = int(input())

while (n):
    n = n + (n % 2)
    soma = 0
    for i in range(0,5):
        soma += (n + i * 2)
    print(soma)
    n = int(input())
