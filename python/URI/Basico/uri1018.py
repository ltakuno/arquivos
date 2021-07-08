n = int(input())
print(n)
cedulas = [100, 50, 20, 10, 5, 2, 1]

for cedula in cedulas:
    nota = n // cedula
    n = n % cedula
    print("{0} nota(s) de R$ {1},00".format(nota, cedula))

