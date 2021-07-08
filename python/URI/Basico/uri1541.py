# 1541 - construindo casas

import math
v = list(map(int, input().split()))

while (v[0] > 0):
    casa = v[0] * v[1]
    area = ((casa)*100.0)/v[2]
    lado_terreno = math.floor(math.sqrt(area))
    print("{}".format(lado_terreno))
    v = list(map(int, input().split()))
    
