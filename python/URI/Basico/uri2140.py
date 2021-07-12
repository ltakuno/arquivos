# 2140 - duas notas


notas = [2, 5, 10, 20, 50, 100]
n, m = map(int, input().split())
while n or m:

    troco = m - n

    if troco > 0:
        i = 0
        f = 5
        possivel = False
        valor = 0
        while i <= f:
            valor = notas[i] + notas[f]
            if valor == troco:
                print('possible')
                break
            elif valor > troco:
                f -= 1
            elif valor < troco:
                i += 1

        if valor != troco:
            print('impossible')
    else:
        print('impossible')
    
    n, m = map(int, input().split())


