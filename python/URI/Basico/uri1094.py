# 1094 - experiências

n = int(input())
total, tc, tr, ts = 0, 0, 0, 0

while (n > 0):
    quantia, tipo = input().split()
    quantia = int(quantia)
    if tipo == 'C': tc += quantia
    elif tipo == 'R': tr += quantia
    elif tipo == 'S': ts += quantia
    total += quantia
    n -= 1


print("Total: {} cobaias".format(total))
print("Total de coelhos: {}".format(tc))
print("Total de ratos: {}".format(tr))
print("Total de sapos: {}".format(ts))
print("Percentual de coelhos: {:.2f} %".format((tc/total) * 100.0))
print("Percentual de ratos: {:.2f} %".format((tr/total) * 100.0))
print("Percentual de sapos: {:.2f} %".format((ts/total) * 100.0))



