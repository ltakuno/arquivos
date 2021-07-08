# 1072 - intervalo2 

n = int(input())
dentro = 0
fora = 0

while (n > 0):
    x = int(input())
    if (x >= 10 and x <= 20):
        dentro += 1
    else:
        fora += 1
    n -= 1
print("{} in".format(dentro))
print("{} out".format(fora))


