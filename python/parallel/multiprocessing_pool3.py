# -*- coding: utf-8 -*-
from multiprocessing import Pool
def eh_primo(n):
    for i in range(3, int(n**0.5+1), 2):
            if n % i == 0:
                print(n, ' nao eh primo')
                return False
    print(n, ' eh primo')
    return True


numeros = [1297337, 1116281, 104395303, 472882027, 533000389, 817504243, 982451653, 112272535095293, 115280095190773, 1099726899285419] * 100
pool = Pool()
pool.map(eh_primo, numeros)

