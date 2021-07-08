def obter_maior(a, b):
    return (a + b + abs(a-b))/2

a, b, c = map(int, input().split())
resultado = obter_maior(a, b) 
resultado = obter_maior(resultado, c)
print("{0} eh o maior".format(int(resultado)))
