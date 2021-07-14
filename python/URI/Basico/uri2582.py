# 2582 - System of Download


musicas = ['PROXYCITY', 'P.Y.N.G.', 'DNSUEY!', 'SERVERS', 'HOST!', 'CRIPTONIZE', 'OFFLINE DAY', 'SALT', 'ANSWER!', 'RAR?', 'WIFI ANTENNAS']

n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    print(musicas[x+y])


