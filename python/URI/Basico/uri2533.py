# 2533 - estágio
try:
    while True:
        n = int(input())
        numerador = 0
        denominador = 0
        for _ in range(n):
            n, c = map(int, input().split())
            numerador +=  (n * c)
            denominador += c

        print('{:.4f}'.format(numerador/(denominador * 100)))
except EOFError:
    pass
