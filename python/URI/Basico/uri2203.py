# 2203 - tempestad de corvos
from math import sqrt

try:
    while True:
        xf, yf, xi, yi, vi, r1, r2 = map(int, input().split())
        distancia = sqrt((xf - xi)**2 + (yf - yi)**2)
        if r1 + r2 >= distancia + 1.5 * vi:
            print('Y')
        else:
            print('N')
except EOFError:
    pass
