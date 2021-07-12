# 2163 - o despertar da força



def aloca_matriz(n, m):
    return [[] for _ in range(n)]

def main():
    n, m = map(int, input().split())
    terreno = aloca_matriz(n, m)

    for l in range(n):
        terreno[l] = list(map(int, input().split()))

    x = 0
    y = 0
    
    for l in range(1, n-1):
        for c in range(1, m-1):
            if terreno[l][c] == 42 and terreno[l-1][c] == 7 and terreno[l-1][c-1] == 7 and terreno[l][c-1] == 7 and terreno[l+1][c-1] == 7 and terreno[l+1][c] == 7 and terreno[l+1][c+1] == 7 and terreno[l][c+1] == 7 and terreno[l-1][c+1] == 7: 
                x = l+1
                y = c+1


    print('{} {}'.format(x, y))

main()




