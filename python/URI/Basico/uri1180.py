# 1180 - menor e posição
from functools import reduce


n = int(input())
v = zip(range(n), map(int, input().split()))

menor = reduce((lambda x, y: x if (x[1] < y[1]) else y), v)
print("Menor valor: {}".format(menor[1]))
print("Posicao: {}".format(menor[0]))
