# 2029 - reservatorio de mel



try:
    while True:
        v = float(input())
        d = float(input())

        r = d/2
        area_base = 3.14 * r * r
        h = v / area_base
        print('ALTURA = {:.2f}'.format(h))
        print('AREA = {:.2f}'.format(area_base))
 
except EOFError:
    pass
