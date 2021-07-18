# 2715 - dividindo os trabalhos

try:
    while True:
        n = int(input())
        v = list(map(int, input().split()))


        rangel = 0
        gugu = 0
        i = 0
        j = n - 1
        while i <= j:
            if rangel <= gugu:
                rangel += v[i]
                i += 1
            else:
                gugu += v[j]
                j -= 1

        print(abs(rangel - gugu))
except EOFError:
    pass


