# 2502 - decifrando a carta criptografada

try:
    while True:
        c, n = map(int, input().split())

        chave = input()
        cifra = input()
        mapa = {}
        for i in range(c):
            mapa[chave[i].upper()] = cifra[i].upper()
            mapa[chave[i].lower()] = cifra[i].lower()
            mapa[cifra[i].upper()] = chave[i].upper()
            mapa[cifra[i].lower()] = chave[i].lower()

        for _ in range(n):
            entrada = input()
            saida = ''
            for i in range(len(entrada)):
                if entrada[i] in mapa:
                    saida += mapa[entrada[i]]
                else:
                    saida += entrada[i]
            print(saida)
        print()
except EOFError:
    pass
