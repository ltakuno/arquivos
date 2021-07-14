# 2552 - pao de quejo sweeper

try:
    while True:
        n, m = map(int, input().split())
        t = []
        for _ in range(n):
            t.append(list(map(int, input().split())))

        for i in range(n):
            for j in range(m):

                if t[i][j] == 1:
                    v = 9
                else:
                    v = 0
                    if i > 0 and t[i-1][j] == 1:
                        v += 1
                    if i < n-1 and t[i+1][j] == 1:
                        v += 1
                    if j > 0 and t[i][j-1] == 1:
                        v += 1
                    if j < m-1 and t[i][j+1] == 1:
                        v += 1
                print('{}'.format(v), end='')
            print()

except EOFError:
    pass
