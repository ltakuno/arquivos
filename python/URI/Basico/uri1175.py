# 1175 - troca em vetor I

v = [0] * 20
for i in range(20):
    v[i] = int(input())

for i in range(20):
    print("N[{}] = {}".format(i, v[19 - i]))
