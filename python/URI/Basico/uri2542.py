# 2542 - lu-Di-Oh

try:
    while True:
        n = int(input())
        m, l = map(int, input().split())

        baralho_jogador1 = []
        for _ in range(m):
            baralho_jogador1.append(list(map(int, input().split())))

        baralho_jogador2 = []
        for _ in range(l):
            baralho_jogador2.append(list(map(int, input().split())))

        carta1, carta2 = map(int, input().split())
        atributo = int(input())

        v1 = baralho_jogador1[carta1-1][atributo-1] 
        v2 = baralho_jogador2[carta2-1][atributo-1]
        if v1 == v2:
            print('Empate')
        elif v1 > v2:
            print('Marcos')
        else:
            print('Leonardo')
except EOFError:
    pass
