# 2547 - montanha russa
try:
    while True:
        n, amin, amax = map(int, input().split())
        contador = 0
        for _ in range(n):
            altura = int(input())
            if altura >= amin and altura <= amax:
                contador += 1
        print(contador)

except EOFError:
    pass

