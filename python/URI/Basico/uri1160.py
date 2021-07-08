# 1160 - crescimento populacional

t = int(input())

while(t):
    l = input().split()
    pa = int(l[0])
    pb = int(l[1])
    g1 = 1.0 + float(l[2])/100.0
    g2 = 1.0 + float(l[3])/100.0

    anos = 0
    while (pa <= pb and anos < 110):
        pa = int(pa * g1)
        pb = int(pb * g2)
        anos += 1

    if (anos <= 100):
        print("{} anos.".format(anos))
    else:
        print("Mais de 1 seculo.")
    t -= 1
