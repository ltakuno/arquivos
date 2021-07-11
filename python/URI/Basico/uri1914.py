# 1914 - de quem é a vez

qt = int(input())

for _ in range(qt):
    jogador1, escolha1, jogador2, escolha2 = map(str, input().split())
    valor1, valor2 = map(int, input().split())
    soma = valor1 + valor2
    if soma % 2 == 0:
        if escolha1 == 'PAR':
            print(jogador1)
        else:
            print(jogador2)
    else:
        if escolha1 == 'IMPAR':
            print(jogador1)
        else:
            print(jogador2)

    
