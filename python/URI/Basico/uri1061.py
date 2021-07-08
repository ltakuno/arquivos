# 1061 - Tempo de um Evento

_, d1 = input().split()
h1, m1, s1 = map(int, input().split(":"))
_, d2 = input().split()
h2, m2, s2 = map(int, input().split(":"))

d1 = int(d1)
d2 = int(d2)
ds = s2 - s1
dm, dh, dd = 0, 0, 0

if (ds < 0):
    ds += 60
    dm -= 1

dm += m2 - m1
if (dm < 0):
    dm += 60
    dh -= 1

dh += h2 - h1
if (dh < 0):
    dh += 24
    dd -= 1

dd += d2 - d1

print("{} dia(s)".format(dd))
print("{} hora(s)".format(dh))
print("{} minuto(s)".format(dm))
print("{} segundo(s)".format(ds))

    
