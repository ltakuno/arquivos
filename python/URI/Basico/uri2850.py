# 2850 - papagaio poliglota

mapa = {'esquerda': 'ingles', 'direita': 'frances', 'nenhuma': 'portugues', 'as duas': 'caiu'}

while True:
    try:
        s = input()
        print(mapa[s])
    except:
        break
