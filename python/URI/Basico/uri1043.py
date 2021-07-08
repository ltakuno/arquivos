# 1043 - Triangulo

a, b, c = map(float, input().split())

if (a < b+c and b < a+c and c < a+b):
    print("Perimetro = {:.1f}".format(a+b+c))
else:
    print("Area = {:.1f}".format((a+b)*c/2))
