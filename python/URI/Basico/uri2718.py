# 2718 - luzes de natal
n = int(input())

for _ in range(n):
    x = int(input())
    s = '{:b}'.format(x).split('0')
    maior = 0
    for lampadas in s:
        if len(lampadas) > maior:
            maior = len(lampadas)

    print(maior)

