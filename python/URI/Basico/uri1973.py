# 1973 - jornada nas estrelas

n = int(input())
ovelhas = list(map(int, input().split()))
visitados = {} 
total = sum(ovelhas)
i = 0
num_estrelas = 0
roubadas = 0
while (i >= 0 and i < n):
    if (i not in visitados):
        num_estrelas += 1
        visitados[i] = True

    if (ovelhas[i] % 2 == 1):
        ovelhas[i] -= 1
        roubadas += 1
        i += 1
    else:
        if (ovelhas[i]):
            ovelhas[i] -= 1
            roubadas += 1
        i -= 1 
                

print('{} {}'.format(num_estrelas, total - roubadas))
