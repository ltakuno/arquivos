# 2554 - Pizza antes de BH

try:
    while True:
        n, d = map(int, input().split())

        evento_ok = False
        data_evento = ''
        for _ in range(d):
            entrada = input()
            pos = entrada.index(' ')
            data = entrada[:pos].strip()

            pessoas = sum(list(map(int, entrada[pos:].split())))
            if pessoas == n and evento_ok == False:
                data_evento = data
                evento_ok = True

        if evento_ok:
            print(data_evento)
        else:
            print('Pizza antes de FdI')

except EOFError:
    pass
