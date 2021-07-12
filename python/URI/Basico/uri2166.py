# 2166 - raiz quadrada de 2

n = int(input())
if n == 0:
    print('{:.10f}'.format(1))
else:
    fracao = 2
    for _ in range(1, n):
        fracao = 2 + 1/fracao

    print('{:.10f}'.format(1 + 1/fracao))
