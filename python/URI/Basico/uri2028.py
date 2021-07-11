# 2028 - sequencia de sequencia

try:
    caso = 1
    while True:
        n = int(input())

        if n == 0:
            print('Caso {}: 1 numero\n{}'.format(caso, n))
        else:
            qtd = n * (n + 1)//2 + 1
            print('Caso {}: {} numeros\n0'.format(caso, qtd), end='')

            for i in range(1, n+1):
                for _ in range (i):
                    print(' {}'.format(i), end='')
            print()
        print()
        caso += 1


except EOFError:
    pass
