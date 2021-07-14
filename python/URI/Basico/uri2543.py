# 2543 - jogatina UFPR
try:
    while True:
        n, id = map(int, input().split())
        contador = 0
        for _ in range(n):
            i, j = map(int, input().split())
            if i == id and j == 0:
                contador += 1

        print(contador)
except EOFError:
    pass
