# 1557 - matriz quadrada III


def aloca_matriz(linhas, colunas):
    return [[0] * colunas for i in range(linhas)]


def main():
    m = aloca_matriz(100, 100)
    n = int(input())

    while (n):
        maior = 0
        for i in range(n):
            for j in range(n):
                m[i][j] = 1 << (i + j)
                if (m[i][j] > maior):
                    maior = m[i][j]

        k = 0
        while (maior > 0):
            maior //= 10
            k += 1


        for i in range(n):
            for j in range(n):
                if (j == 0):
                    print("%*d" % (k, m[i][j]), end="")
                else:
                    print(" %*d" % (k, m[i][j]), end="")
            print()
        print()
        n = int(input())

main()
