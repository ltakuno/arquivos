# 2769 - linha de montagem
import sys

def solveR(i, j, e, x, a, t, n, pd):
    if (pd[i][j] >= 0):
        return pd[i][j]
    elif (j == n):
        pd[i][j] = a[i][j] + x[i]
    else:
        pd[i][j] = a[i][j] + min(solveR(i,j+1, e, x, a, t, n, pd), t[i][j] + solveR(1-i, j+1, e, x, a, t, n, pd))
    return pd[i][j]

def solve(e, x, a, t, n):
    pd = [(n+1) * [0], (n+1)*[0]]
    pd[0][n] = a[0][n] + x[0]
    pd[1][n] = a[1][n] + x[1]

    for j in range(n-1, -1, -1):
        pd[0][j] = -1
        pd[1][j] = -1

    for i in range(2):
        for j in range(n, -1, -1):
            if (j == n):
                pd[i][j] = a[i][j] + x[i]
            elif (j == 0):
                pd[i][j] = e[i] + pd[i][j+1]
            else:
                pd[i][j] = a[i][j] + min(pd[i][j+1], t[i][j] + solveR(1-i,j+1,e, x, a, t, n, pd))
    #print(pd[0])
    #print(pd[1])

    return min(pd[0][0], pd[1][0])

def leia():
    entrada = input().strip()
    while len(entrada) == 0:
        entrada = input().strip()
    return entrada

def main():
    try:
        while True:
            n = int(leia())
            e1, e2 = map(int, leia().split())
            e = [e1, e2]
            
            a = [[],[]]
            a[0] = [0] + list(map(int, leia().split()))
            a[1] = [0] + list(map(int, leia().split()))

            t = [[0],[0]]
            if n > 1:
                t[0] = t[0] + list(map(int, leia().split()))
                t[1] = t[1] + list(map(int, leia().split()))

            x1, x2 = map(int, leia().split())
            x = [x1, x2]

            s = solve(e, x, a, t, n) 
            print(s)

    except EOFError:
        pass

main()

