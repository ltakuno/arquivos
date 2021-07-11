# 1961- pula sapo

p, n = map(int, input().split())
v = list(map(int, input().split()))

ganhou = True
for i in range(1, n):
    if abs(v[i]-v[i-1]) > p:
        ganhou = False

if (ganhou):
    print('YOU WIN')
else:
    print('GAME OVER')




