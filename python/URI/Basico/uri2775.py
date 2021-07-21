# 2775 - preparando a produçao
import sys
while True:
    try:
        n = int(input())
        pacote = list(map(int, sys.stdin.readline().split()))
        tempo = list(map(int, sys.stdin.readline().split()))
        resultado = 0
        for i in range(n-2, -1, -1):
            for j in range(i, n):
                if pacote[i] > pacote[j]:
                    resultado += tempo[i] + tempo[j]

        print(resultado)
    except EOFError:
        break




