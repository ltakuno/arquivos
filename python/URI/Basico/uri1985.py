p = int(input())

preco = {1001: 1.50,  1002: 2.5, 1003: 3.5, 1004: 4.5, 1005: 5.50} 

soma = 0
for _ in range(p):
    id, qtd = map(int, input().split())
    soma += qtd * preco[id]

print('{:.2f}'.format(soma))
