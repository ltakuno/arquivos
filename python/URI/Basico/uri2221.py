# 2221 - batalha de pomekons

t = int(input())
for _ in range(t):
    b = int(input())
    a1, d1, l1 = map(int, input().split())
    a2, d2, l2 = map(int, input().split())

    valorGolpe1 = (a1 + d1)/2 + (b if l1 % 2 == 0 else 0)
    valorGolpe2 = (a2 + d2)/2 + (b if l2 % 2 == 0 else 0)

    if valorGolpe1 == valorGolpe2:
        print('Empate')
    elif valorGolpe1 > valorGolpe2:
        print('Dabriel')
    elif valorGolpe1 < valorGolpe2:
        print('Guarte')
    

