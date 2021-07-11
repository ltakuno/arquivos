# 1929 - triangulo


def eh_triangulo(x, y, z):
    return (y + z > x) and (x + z > y) and (x + y > z)

def main():

    a, b, c, d = map(int, input().split())

    if (eh_triangulo(a, b, c) or
        eh_triangulo(a, c, d) or
        eh_triangulo(a, b, d) or
        eh_triangulo(b, c, d)):
        print('S')
    else:
        print('N')

main()


