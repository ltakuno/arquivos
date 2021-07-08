valor = float(input())

notas = [100, 50, 20, 10, 5, 2]
moedas = [100, 50, 25, 10, 5, 1]

v = int(valor)
d = int((valor + 0.005 - v) * 100) 

print("NOTAS:")
for nota in notas:
    total_notas = int(v/nota)
    v %= nota
    print("{0} nota(s) de R$ {1}.00".format(total_notas, nota))

d += (v * 100)
print("MOEDAS:")
for moeda in moedas:
    total_moedas = int(d / moeda)
    d %= moeda
    m = moeda / 100.0
    print("{0} moeda(s)".format(total_moedas), end = " ")
    print("de R$ {:.2f}".format(moeda/100.0))

