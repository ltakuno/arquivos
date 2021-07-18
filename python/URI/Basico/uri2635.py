# 2635 - navegador web
try:
    while True:
        n = int(input())
        lista = []

        for _ in range(n):
            lista.append(input())

        q = int(input())
        for _ in range(q):
            tam = 0
            cont = 0
            palavra = input()
            for i in range(n):
                if lista[i].find(palavra) == 0:
                    cont += 1
                    tam = max(tam, len(lista[i]))
            if cont > 0:
                print("{} {}".format(cont, tam))
            else:
                print(-1)



except EOFError:
    pass
