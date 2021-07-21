# 2770 - tamanho da placa
import sys

while True:
    try:
        x, y, m = map(int, sys.stdin.readline().split())
        for i in range(m):
            a, b = map(int, sys.stdin.readline().split())
            if a <= x and b <= y or b <= x and a <= y:
                print('Sim')
            else:
                print('Nao')
    except:
        break

