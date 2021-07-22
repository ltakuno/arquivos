# 2782 - escadinha
import sys
n = int(input())
v = list(map(int, input().split()))
par = list(zip(v, v[1:]))

if (n == 1):
    print(1)
else:
    dif_ant = sys.maxsize
    cont = 0 
    for p in par:
        dif  = p[1] - p[0]
        if (dif != dif_ant):
            dif_ant = dif
            cont += 1
    print(cont)
