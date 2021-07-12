# 2161 - raiz quadrada de 10

n = int(input())

if n == 0:
    print('{:.10f}'.format(3.0))
else:
    fracao = 6.0
    for _ in range(1, n):
        fracao = 6.0 + 1.0/fracao

    print('{:.10f}'.format(3  + 1.0/fracao))
