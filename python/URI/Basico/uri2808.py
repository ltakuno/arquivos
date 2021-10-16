# 2808 - Mais cavalos

i, f = input().split()
xi, yi = ord(i[0]), int(i[1])
xf, yf = ord(f[0]), int(f[1])

deltax = abs(xi - xf)
deltay = abs(yi - yf)

if ((deltax == 1) and (deltay == 2)) or ((deltax == 2) and (deltay == 1)):
    print('VALIDO')
else:
    print('INVALIDO')



