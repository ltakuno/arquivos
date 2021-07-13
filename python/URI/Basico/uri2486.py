# 2486 - C mais ou menos?

tabela_alimentos = { 'suco de laranja': 120,
        'morango fresco': 85,
        'mamao': 85,
        'goiaba vermelha': 70,
        'manga': 56,
        'laranja': 50,
        'brocolis': 34 }


t = int(input())

while t:
    vitaminas = 0
    for _ in range(t):
        entrada = input()
        pos = entrada.index(' ')
        n = int(entrada[:pos])
        alimento = entrada[pos:].strip()
        vitaminas += (n * tabela_alimentos[alimento])

    if vitaminas > 130:
        print('Menos {} mg'.format(vitaminas - 130))
    elif vitaminas < 110:
        print('Mais {} mg'.format(110 - vitaminas))
    else:
        print('{} mg'.format(vitaminas))

    t = int(input())
