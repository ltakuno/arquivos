# 2311 - saltos ornamentais

n = int(input())

for _ in range(n):
    nome = input()
    gd = float(input())
    notas = sorted(list(map(float, input().split())))
    notas[0] = 0
    notas[6] = 0
    total = sum(notas) * gd
    print('{} {:.2f}'.format(nome, total))
