# 2332 - magic and sword
from math import sqrt

class Magia:
    def __init__(self, dano, level):
        self.dano = dano
        self.level = level

def distancia(x0, y0, x1, y1):
    return sqrt((x0 - x1)**2 + (y0 - y1)**2)

def coord_ok(u, i, f, v):
    if u >= i and u <= f:
        return u
    else:
        return v


def pos_menor_distancia(w, h, x0, y0, cx, cy):
    v = [(x0 + w, y0), (x0, y0 + h), (x0 + w, y0 + h), (coord_ok(cx, x0, x0+w, x0), coord_ok(cy, y0, y0+h, y0)), (coord_ok(cx, x0, x0+w, x0+w), coord_ok(cy, y0, y0+h, y0)), (coord_ok(cx, x0, x0+w, x0), coord_ok(cy, y0, y0+h, y0+h)), (coord_ok(cx, x0, x0+w, x0+w), coord_ok(cy, y0, y0+h, y0+h))] 
    x, y = x0, y0
    menor = distancia(x, y, cx, cy)
    for p in v:
        d = distancia(p[0], p[1], cx, cy)
        if (d < menor):
            menor = d
            x, y = p[0], p[1]
    return x, y

def main():
    magia = {'fire': Magia(200, [0,20,30,50]),
            'water': Magia(300, [0,10,25,40]),
            'earth': Magia(400, [0,25,55,70]),
            'air'  : Magia(100, [0,18,38,60])}
    nn = int(input())
    for i in range(nn):
        w, h, x0, y0 = map(int, input().split())
        entrada = input().split()
        tipo_magia = entrada[0]
        n, cx, cy = map(int, entrada[1:])
        raio = magia[tipo_magia].level[n]
        x, y = pos_menor_distancia(w, h, x0, y0, cx, cy)
        d = distancia(x, y, cx, cy)

        #print('distancia: {}, raio: {}'.format(d, raio))
        #print('x:{} y:{}'.format(x,y))
        #if i in [191, 351, 523]:
        #    print('{}, {}, {}, {}'.format(w, h, x0, y0))
        #    print('{} {} {} {}'.format(tipo_magia, n, cx, cy))

        if (d <= raio):
            print(magia[tipo_magia].dano)
        else:
            print(0)

main()


