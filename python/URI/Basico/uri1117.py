# 1117 - validação de nota
cont = 0
soma = 0.0
while (cont < 2):
    n = float(input())
    if (n >= 0.0 and n <= 10.0):
        soma += n
        cont += 1
    else:
        print('nota invalida')

print('media = {:.2f}'.format(soma/2.0))

