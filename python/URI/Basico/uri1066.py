# 1065 - pares entre 5 números

n = 5
qtd_pares = 0 
qtd_positivos = 0
qtd_negativos = 0
while (n > 0):
    v = int(input())
    if (v % 2 == 0):
        qtd_pares += 1
    if (v > 0):
        qtd_positivos += 1
    if (v < 0):
        qtd_negativos += 1
    n -= 1

print("{} valor(es) par(es)".format(qtd_pares))
print("{} valor(es) impar(es)".format(5 - qtd_pares))
print("{} valor(es) positivo(s)".format(qtd_positivos))
print("{} valor(es) negativo(s)".format(qtd_negativos))



