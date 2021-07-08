salario = float(input())

if (salario <= 2000.00):
    print("Isento")
else:
    if (salario >= 2000.01 and salario <= 3000.00):
        imposto = (salario - 2000.00) * 0.08
    elif (salario >= 3000.01 and salario <= 4500.00):
        imposto = 1000.00 * 0.08 + (salario - 3000.00)  * 0.18 
    elif (salario >= 4500.01):
        imposto = 1000.00 * 0.08 + 1500.00 * 0.18 + (salario - 4500.00) * 0.28

    print("R$ {:.2f}".format(imposto))
