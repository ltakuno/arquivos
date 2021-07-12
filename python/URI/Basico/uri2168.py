# 2168 - crepusculo em portland



n = int(input()) + 1
m = []
for _ in range(n):
    m.append(list(map(int, input().split())))


for i in range(1,n):
    for j in range(n-1):
        r = m[i][j] + m[i-1][j] + m[i][j+1] + m[i-1][j+1]
        if r > 1:
            print('S', end = '')
        else:
            print('U', end = '')
    print()



