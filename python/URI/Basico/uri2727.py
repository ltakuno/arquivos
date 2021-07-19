# 2727 - codigo secreto

try:
    v1 = ['a', 'd', 'g', 'j', 'm', 'p', 's', 'v', 'y']
    v2 = ['b', 'e', 'h', 'k', 'n', 'q', 't', 'w', 'z']
    v3 = ['c', 'f', 'i', 'l', 'o', 'r', 'u', 'x']

    vv = [v1, v2, v3]
    while True:
        n = int(input())
        for _ in range(n):
            entrada = list(map(str, input().split()))
            k = len(entrada)-1
            l = len(entrada[0])-1
            print(vv[l][k])


except EOFError:
    pass
