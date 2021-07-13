# 2523 - a mensagem de Will

try:
    while True:
        alfabeto = input()
        n = int(input())
        mensagem_codificada = list(map(int, input().split()))
        for i in mensagem_codificada:
            print(alfabeto[i - 1], end='')
        print()
except EOFError:
    pass
