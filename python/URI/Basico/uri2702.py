# 2702 - escolha dificil

disponivel = list(map(int, input().split()))
requisitado  = list(map(int, input().split()))
total = 0
for i in range(len(disponivel)):
    if requisitado[i] > disponivel[i]:
        total += (requisitado[i] - disponivel[i])

print(total)
