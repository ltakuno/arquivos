# 2313 - qual triangulo



def eh_triangulo(a, b, c):
    return (a < b + c and b < a + c and c < a + b)

def eh_retangulo(a, b, c):
    return (a*a == b*b + c*c or b*b == a*a + c*c or c*c == a*a + b*b)


def main():
    a, b, c = map(int, input().split())

    if not eh_triangulo(a, b, c):
        print('Invalido')
    else:
        if a == b and b == c:
            print('Valido-Equilatero')
        elif a == b or a == c or b == c:
            print('Valido-Isoceles')
        else:
            print('Valido-Escaleno')

        if eh_retangulo(a, b, c):
            print('Retangulo: S')
        else:
            print('Retangulo: N')


main()


