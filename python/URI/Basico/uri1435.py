# 1435 - matriz quadrada I

def aloca_matriz(linhas, colunas):
    return [[0] * colunas for i in range(linhas)]


def main():
    m = aloca_matriz(100, 100)
    n = int(input())

    while (n):
        trocou = 1
        k = 1
        while (trocou):
            trocou = 0
            for i in range(k-1, n-(k-1)):
                for j in range(k-1, n-(k-1)):
                    m[i][j] = k
                    trocou = 1
            k += 1

        for i in range(n):
            for j in range(n):
                if (j == 0):
                    print("{:3d}".format(m[i][j]), end="")
                else:
                    print(" {:3d}".format(m[i][j]), end="")
            print()
        print()
        n = int(input())


main()
