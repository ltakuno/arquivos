

try:
    while True:
        hora, min = map(int, input().split(":"))
        hora = hora + 1 - 8

        if (hora * 60 + min) > 0:
            print('Atraso maximo: {}'.format(hora * 60 + min))
        else:
            print('Atraso maximo: 0')
except EOFError:
    pass
