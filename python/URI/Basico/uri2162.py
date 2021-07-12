# 2162 - picos e vales
from functools import reduce

n = int(input())
v = list(map(int, input().split()))
picos = list(map(lambda x: x[1] - x[0], zip(v, v[1:])))
#print(picos)
if len(picos) == 1 and picos[0] == 0:
    print(0)
else:
    r = list(filter(lambda a: (a[0] >= 0 and a[1] >= 0) or (a[0] <= 0 and a[1] <= 0), list(zip(picos, picos[1:]))))
    if len(r) == 0:
        print(1)
    else:
        print(0)

