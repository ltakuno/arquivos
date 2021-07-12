# 2126 - procurando subsequencias
#        algoritmo KMP

def computar_prefixo(padrao, m, prefixo):
    tam = 0
    prefixo[0] = 0
    i = 1
    while i < m:
        if padrao[i] == padrao[tam]:
            tam += 1
            prefixo[i] = tam
            i += 1
        else:
            if tam != 0:
                tam = prefixo[tam - 1]
            else:
                prefixo[i] = 0
                i += 1

def busca_subsequencia(n1, n2, caso):
    m = len(n1)
    n = len(n2)
    prefixo = [0] * m
    
    computar_prefixo(n1, m, prefixo)
    conta_ocorrencias = 0
    pos_ultima_ocorrencia = -1

    j = 0
    i = 0
    while i < n:
        if n1[j] == n2[i]:
            i += 1
            j += 1
        if j == m:
            conta_ocorrencias += 1
            pos_ultima_ocorrencia = i-j+1
            j = prefixo[j-1]
        elif i < n and n1[j] != n2[i]:
            if j != 0:
                j = prefixo[j - 1]
            else:
                i += 1

    print('Caso #{}:'.format(caso))
    if conta_ocorrencias == 0:
        print('Nao existe subsequencia\n')
    else:
        print('Qtd.Subsequencias: {}'.format(conta_ocorrencias))
        print('Pos: {}\n'.format(pos_ultima_ocorrencia))

def main():
    try:
        caso = 1
        while True:
            n1 = input()
            n2 = input()
            busca_subsequencia(n1, n2, caso)
            caso += 1

    except EOFError:
        pass

main()
