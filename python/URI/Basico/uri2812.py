# 2812 - Laercio

n = int(input())
for _ in range(n):
    m = int(input())
    v = sorted(list(filter(lambda x: x%2 == 1, map(int, input().split()))), reverse = True)
    w = []
    tam = len(v)
    if tam > 0:
        i = 0
        f = len(v) - 1
        while (i <= f):
            w.append(v[i])
            if (i < f):
                w.append(v[f])
            i += 1
            f -= 1
        
        for x in w[:-1]:
            print(x, end = ' ')

        print(w[-1])
    else:
        print()

