# 1064 - Positivos e média

n = 6
q = 0 # quantidade de positivos
soma = 0
while (n > 0):
    v = float(input())
    if (v > 0.0):
        q += 1
        soma += v
    n -= 1
print("{} valores positivos".format(q))
print("{:.1f}".format(soma/q))

