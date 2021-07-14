# 2534 - exame geral

try:
    while True:
        n, q = map(int, input().split())

        notas = []
        for _ in range(n):
            notas.append(int(input()))

        notas.sort(reverse=True)

        for _ in range(q):
            pos = int(input())-1
            print(notas[pos])
except EOFError:
    pass

