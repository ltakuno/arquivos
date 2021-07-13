# 2493 - jogo do operador

try:
    while True:
        n = int(input())
        expressoes = []
        for _ in range(n):
            expressoes.append(input())
            
        jogadores_que_erraram = []    
        for _ in range(n):
            nome, e, r = input().split()
            e = int(e)-1
            op_resultado = list(map(str, expressoes[e].split('=')))
            x, y = map(int, op_resultado[0].split())
            z = int(op_resultado[1])

            if r == '+':
                if x + y != z:
                    jogadores_que_erraram.append(nome)
            elif r == '-':
                if x - y != z:
                    jogadores_que_erraram.append(nome)
            elif r == '*':
                if x * y != z:
                    jogadores_que_erraram.append(nome)
            elif r == 'I':
                if x + y == z or x - y == z or x * y == z:
                    jogadores_que_erraram.append(nome)

        qtd = len(jogadores_que_erraram)

        if qtd == 0:
            print('You Shall All Pass!')
        elif qtd == n:
            print('None Shall Pass!')
        else:
            jogadores_que_erraram.sort()
            k = 0
            for j in jogadores_que_erraram:
                if k > 0:
                    print(' ')
                print(j, end='')
                k += 1
            print()



except EOFError:
    pass
