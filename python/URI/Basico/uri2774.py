# 2774 - precisao do sensor

import sys 
from statistics import mean
from math import sqrt

while True:
    try:
        h, m = map(int, sys.stdin.readline().split())
        x = list(map(float, sys.stdin.readline().split()))
        media = mean(x)
        qt = (h * 60) // m
        soma = 0
        for i in range(qt):
            soma += (x[i] - media)**2

        precisao = sqrt(soma/(qt - 1))
        print('{:.5f}'.format(precisao))
    except EOFError:
        break


