nome = input()
salario_fixo = float(input())
total_de_vendas = float(input())

total = salario_fixo + total_de_vendas * 0.15

print("TOTAL = R$ {:.2f}".format(total))
