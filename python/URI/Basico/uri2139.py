# 2139 - natal de pedrinho


meses = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

try:
    while True:
        mes, dia = map(int, input().split())

        if mes == 12 and dia > 25:
            print('Ja passou!')
        elif mes == 12 and dia == 25:
            print('E natal!')
        elif mes == 12 and dia == 24:
            print('E vespera')
        else:
            dias = 0
            for m in range(mes, 13):
                dias += meses[m]

            dias = dias - 6 - dia
            print('Faltam {} dias para o natal!'.format(dias))
except EOFError:
    pass
