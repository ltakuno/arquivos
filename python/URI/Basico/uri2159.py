# 2159 - numero aproximado de primos
from math import log
n = int(input())
print('{:.1f} {:.1f}'.format(n/log(n), 1.25506 * n/log(n)))
