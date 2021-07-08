faixas_salariais = [(0.0   , 400.0), 
         (400.01, 800.0), 
         (800.01, 1200.0),
         (1200.01, 2000.0), 
         (2000.01, float("inf"))]
percentual_de_reajuste = [0.15, 0.12, 0.10, 0.07, 0.04]

salario = float(input())

for i in range(len(faixas_salariais)):
    faixa = faixas_salariais[i]
    if (salario >= faixa[0] and salario <= faixa[1]):
        print("Novo salario: {:.2f}".format(salario + salario * percentual_de_reajuste[i]))
        print("Reajuste ganho: {:.2f}".format(salario * percentual_de_reajuste[i]))
        print("Em percentual: {:.0f} %".format(percentual_de_reajuste[i] * 100.00))

