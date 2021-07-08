# 1046 - Tempo de jogo

i, f = map(int, input().split())

d = (f - i) % 24
print("O JOGO DUROU {} HORA(S)".format(d + 24 if (d <= 0) else d)) 
