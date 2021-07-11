# 1858 - a resposta de Theon
from functools import reduce

n = int(input())
v = zip(range(1, n+1), list(map(int, input().split())))
menor = reduce((lambda a, b: a if (a[1] <= b[1]) else b), v)
print(menor[0])
