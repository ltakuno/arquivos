# 2031 - pedra, papel, ataque aereo


n = int(input())

jogada = {'papel': 0, 'pedra' : 1, 'ataque' : 2}
msg = {'papel': 'Ambos venceram',
        'pedra': 'Sem ganhador',
        'ataque': 'Aniquilacao mutua',
        'jogador1' : 'Jogador 1 venceu',
        'jogador2' : 'Jogador 2 venceu'}

for _ in range(n):
    jogador1 = input()
    jogador2 = input()
    r = (jogada[jogador1] - jogada[jogador2]) 
    if (r == 0):
        print(msg[jogador1]) 
    else:
        if (r > 0):
            print(msg['jogador1'])
        else:
            print(msg['jogador2'])
        


