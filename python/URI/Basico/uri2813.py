# 2813 - Evitando chuva

def vazia(pilha):
    return len(pilha) == 0
def empilha(pilha, elemento):
    pilha.append(elemento)
def topo(pilha):
    return pilha[-1]
def desempilha(pilha):
    return pilha.pop()

def main():
    n = int(input())
    pilhaC = []
    pilhaE = []
    maiorC = 0
    maiorE = 0
    for _ in range(n):
        ida, volta = map(str, input().split())
        if ida == 'chuva':
            if vazia(pilhaC):
                empilha(pilhaE, 1)
                maiorC += 1
            else:
                elemento = desempilha(pilhaC)
                empilha(pilhaE, elemento)
        if volta == 'chuva':
            if vazia(pilhaE):
                empilha(pilhaC, 1)
                maiorE += 1
            else:
                elemento = desempilha(pilhaE)
                empilha(pilhaC, elemento)
 
    print('{} {}'.format(maiorC, maiorE))

main() 

