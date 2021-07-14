# 2630 - escala de cinza
import statistics

t = int(input())
for i in range(t):
    conversao = input()
    r, g, b = map(int, input().split())
    print('Caso #{}: '.format(i+1), end='')
 
    if conversao == 'min':
        print(min(r, g, b))
    elif conversao == 'max':
        print(max(r, g, b))
    elif conversao == 'mean':
        print(int(statistics.mean([r, g, b])))
    elif conversao == 'eye':
        print(int(0.3 * r + 0.59 * g + 0.11 * b))
        




