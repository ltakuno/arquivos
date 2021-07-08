# 1045 - tipos de triângulos

v = list(map(float, input().split()))
v.sort(reverse=True)

a, b, c = v[0], v[1], v[2]

if (a >= b + c):
    print("NAO FORMA TRIANGULO")
else:
    if (a*a == b*b + c*c):
        print("TRIANGULO RETANGULO")
    elif (a*a > b*b + c*c):
        print("TRIANGULO OBTUSANGULO")
    elif (a*a < b*b + c*c):
        print("TRIANGULO ACUTANGULO")


    if (a == b and b == c):
        print ("TRIANGULO EQUILATERO")
    elif (a == b or a == c or b == c):
        print("TRIANGULO ISOSCELES")


