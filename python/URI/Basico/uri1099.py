# 1099 - soma de ímpares consecutivos II

n = int(input())

while (n > 0):
    a, b = map(int, input().split())
    if (a > b):
        a, b = b, a
    soma = 0 
    for i in range(a+1, b):
        if (i % 2 == 1):
            soma += i
    print(soma)
    n -= 1
