# uri1983 - o escolhido

from functools import reduce
n = int(input())

lista = []
for _ in range(n):
    m, nota = map(float, input().split())
    lista.append((int(m), nota))

maior = reduce(lambda a, b: a if a[1] > b[1] else b, lista)

if maior[1] >= 8.0:
    print(maior[0])
else:
    print('Minimum note not reached')
