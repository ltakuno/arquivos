# 2708 - turistas no parque huacachina

entrada = input()
qtd_turistas = 0
qtd_jipes = 0
while entrada != 'ABEND':
    pos = entrada.find(' ')
    direcao = entrada[:pos].strip()
    t = int(entrada[pos:].strip())
    if direcao == 'SALIDA':
        qtd_turistas += t
        qtd_jipes += 1
    elif direcao == 'VUELTA':
        qtd_turistas -= t
        qtd_jipes -= 1

    entrada = input()

print(qtd_turistas)
print(qtd_jipes)




