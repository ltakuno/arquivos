# 1848 - corvo contador

soma = 0
padrao = {'---': 0, '--*': 1, '-*-': 2, '-**' : 3, '*--' : 4, '*-*' : 5, '**-' : 6, '***' : 7 }
contador_gritos = 0
while (contador_gritos < 3):
    entrada = input()
    if entrada in padrao:
        soma += padrao[entrada]
    elif (entrada == 'caw caw'):
        print(soma)
        soma = 0
        contador_gritos += 1
    
