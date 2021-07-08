# 1101 - sequencia de números e soma

a, b = map(int, input().split())

while (a > 0 and b > 0):
    if (a > b):
        a, b = b, a
    soma = 0
    for i in range(a, b+1):
        print("{} ".format(i), end="")
        soma += i
    print("Sum={}".format(soma))
    a, b = map(int, input().split())
