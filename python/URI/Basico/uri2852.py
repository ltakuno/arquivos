# 2852 - troca de mensagens



k = [ord(x) - 97 for x in input()]
n = int(input())

for _ in range(n):
    msg = input()
    v = msg.split()
    tam = len(k)
    u = 0

    primeiro = True
    for p in v:

        if primeiro:
            primeiro = False
        else:
            print(' ', end='')

        if p[0] in ['a','e','i','o','u']:
            print(p, end='')
        else:
            for c in p:
                codigo = ord(c) + k[u % tam]
                if codigo > 122:
                    codigo = codigo - 26 
                print(chr(codigo), end = '')
                u += 1
    print()


      
