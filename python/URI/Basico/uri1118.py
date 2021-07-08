# 1118 - várias notas com validação

continua = 1
while (continua == 1):

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

    print('novo calculo (1-sim 2-nao)')
    continua = int(input())
    while (continua != 1 and continua != 2):
        print('novo calculo (1-sim 2-nao)')
        continua = int(input())

