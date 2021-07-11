# 1958 - notação cientifica

v = input()
if (v[0] == '-'):
    print('{:.4E}'.format(float(v)))
else:
    print('+{:.4E}'.format(float(v)))
