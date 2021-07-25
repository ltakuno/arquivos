# 2785 - Piramide

def solve1(m, n):
    memo = []
    for i in range(n+2):
        memo.append([0] * (n + 2))
    for i in range(n+1):
        memo[1][i] = m[1][i]

    for linha in range(2, n+1):
        for coluna in range(1, n+1):
            soma = 0
            if coluna + linha - 1 <= n:
                for k in range(coluna, coluna + linha):
                   soma += m[linha][k]

            memo[linha][coluna] = soma + min(memo[linha - 1][coluna], memo[linha-1][coluna + 1])
 
    return memo[n][1]

def solve(m, l, c):
    if l == 1:
        return m[l][c]
    else:
        soma = 0
        for i in range(c,c+l):
            soma += m[l][i]
        return soma + min(solve(m, l-1, c), solve(m, l-1, c+1))

def main():
    n = int(input())
    m = [[0] * (n+2)]
    for _ in range(n):
        m.append([0] + list(map(int, input().split())) + [0])

    #print(solve(m, n, 1))
    print(solve1(m, n))


main()
