# 2863 - Umil Bolt
from functools import reduce

try:
    while True:
        n = int(input())
        tempos = []

        for _ in range(n):
            tempos.append(float(input()))

        menor = reduce(lambda a, b : a if a < b else b, tempos)
        print(menor)

except EOFError:
    pass
