# 1962 - Há muito, muito tempo atrás.

n = int(input())

for _ in range(n):
    t = int(input())
    if (t < 2015):
        r = 2015 - t
        print('{} D.C.'.format(r))
    else:
        r = t - 2015 + 1
        print('{} A.C.'.format(r))
