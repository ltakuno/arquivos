numeros = [1,2,3,4,5,6]
saida  = [0,0,0,0,0,0]


total = 1
anterior = 0
for i in range(len(numeros)):
    anterior = total
    total = total * numeros[i]
    saida[i] = anterior

total = 1
anterior = 0

for i in range(len(numeros)-1,-1,-1):
    anterior = total
    total = total * numeros[i]
    saida[i] = saida[i] * anterior

for n in saida:
    print(n)