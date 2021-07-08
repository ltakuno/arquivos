# 1065 - pares entre 5 números

n = 5
q = 0 # quantidade 
while (n > 0):
    v = int(input())
    if (v % 2 == 0):
        q += 1
    n -= 1
print("{} valores pares".format(q))


