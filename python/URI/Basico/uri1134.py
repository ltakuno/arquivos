# 1134 - tipo de combustível


contador = [0,0,0]

op = int(input())
while (op != 4):
    if (op >= 1 and op <= 3):
        contador[op-1] += 1

    op = int(input())


print("MUITO OBRIGADO")
print("Alcool: {}".format(contador[0]))
print("Gasolina: {}".format(contador[1]))
print("Diesel: {}".format(contador[2]))


