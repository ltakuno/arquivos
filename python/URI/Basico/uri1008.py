numero_funcionario = int(input())
numero_de_horas_trabalhadas = int(input())
valor_por_hora = float(input())

salario = numero_de_horas_trabalhadas * valor_por_hora

print("NUMBER = {0}".format(numero_funcionario))
print("SALARY = U$ {:.2f}".format(salario))

