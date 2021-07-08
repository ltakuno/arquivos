# 1070 - seis números impares

x = int(input())

x = x + 1 if (x % 2 == 0) else x

for i in range(6):
    print(x + i * 2)
