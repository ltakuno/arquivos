def funcA(n):
    b = funcB(n * 2)
    c = funcC(n * 2)
    print('resultado = ', (b + c))
def funcB(x):
    return (x + 5)
def funcC(u):
    return (u + 2)

funcA(5)
