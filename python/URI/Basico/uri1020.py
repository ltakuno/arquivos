n = int(input())

ano = n // 365
n = n % 365
mes = n // 30
dia = n % 30

print("{0} ano(s)".format(ano))
print("{0} mes(es)".format(mes))
print("{0} dia(s)".format(dia))

