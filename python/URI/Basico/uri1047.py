# 1047 - Tempo de jogo com minutos

hi, mi, hf, mf = map(int, input().split())

d = hf - hi
d = d + 24 if (d < 0 or (d == 0 and mf <= mi)) else  d

dm  = mf - mi
if (dm < 0):
    dm += 60
    d = d - 1


print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(d, dm))
