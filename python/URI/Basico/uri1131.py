# 1131 - Grenais
grenal, inter, gremio, empates = 0, 0, 0, 0
opcao = 1

while (opcao == 1):
    a, b = map(int, input().split())

    grenal += 1
    if (a > b):
        inter += 1
    elif (a < b):
        gremio += 1
    elif (a == b):
        empates += 1


    print("Novo grenal (1-sim 2-nao)")
    opcao = int(input())

print("{} grenais".format(grenal))
print("Inter:{}".format(inter))
print("Gremio:{}".format(gremio))
print("Empates:{}".format(empates))

if (inter > gremio):
    print("Inter venceu mais")
elif (inter < gremio):
    print("Gremio venceu mais")
elif (inter == gremio):
    print("Nao houve vencedor")

