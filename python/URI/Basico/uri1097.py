# 1097 - sequencia ij 3
k = 7
for i in range(1, 10, 2):
    for j in range(k, k-3, -1):
        print("I={} J={}".format(i, j))
    k += 2

