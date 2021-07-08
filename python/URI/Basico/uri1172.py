# 1172 - substituicao em vetor I

for i in range(0, 10):
    v = int(input())
    if (v <= 0):
        print("X[{}] = 1".format(i))
    else:
        print("X[{}] = {}".format(i, v))
