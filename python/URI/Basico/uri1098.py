# 1098 - sequencia ij 4
for i in range(0, 21, 2):
    for j in range(1, 4):
        if (i == 0 or i == 10 or i == 20):
            print("I={} J={}".format(i//10, j + i//10))
        else:
            print("I={:.1f} J={:.1f}".format(i/10.0, (j + i/10.0)))
