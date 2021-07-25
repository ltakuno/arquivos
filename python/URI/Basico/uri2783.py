# 2783 - Figurinhas da Copa
n, c, m = map(int,input().split())
carimbadas = list(map(int, input().split()))
compradas = set(map(int, input().split()))

cont = 0
for figurinha in compradas:
    if figurinha in carimbadas:
        cont += 1

print(len(carimbadas) - cont)

