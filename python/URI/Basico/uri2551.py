# 2551 - novo recorde
try:
    while True:
        n = int(input())
        maior = 0
        for i in range(n):
            t, d = map(int, input().split())
            if d/t > maior:
                maior = d/t
                print(i+1)


except EOFError:
    pass

