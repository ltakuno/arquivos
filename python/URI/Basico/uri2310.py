# 2310 - voleibol
n = int(input())

saques_total, bloqueios_total, ataques_total = 0, 0, 0
saques_jogador, bloqueios_jogador, ataques_jogador = 0, 0, 0

for _ in range(n):
    nome = input()
    s, b, a = map(int, input().split())
    s1, b1, a1 = map(int, input().split())
    saques_total += s
    bloqueios_total += b
    ataques_total += a
    saques_jogador += s1
    bloqueios_jogador += b1
    ataques_jogador += a1


print('Pontos de Saque: {:.2f} %.'.format(saques_jogador/saques_total * 100.0))
print('Pontos de Bloqueio: {:.2f} %.'.format(bloqueios_jogador/bloqueios_total * 100.0))
print('Pontos de Ataque: {:.2f} %.'.format(ataques_jogador/ataques_total * 100.0))

