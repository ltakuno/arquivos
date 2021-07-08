# 1080 - maior e posição

maior = int(input())
pos = 1
for i in range(2, 101):
    n = int(input())
    if (n > maior):
        maior = n
        pos = i


print(maior)
print(pos)

