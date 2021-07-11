# 2059 - impar, par ou roubo


def jogador1_jogou_par(p, r, a):
    return (p == 1 and r == 0 and a == 0) or (r == 1 and a == 0) or (r == 0 and a == 1)

def jogador1_jogou_impar(p, r, a):
    return (p == 0 and r == 0 and a == 0) or (r == 1 and a == 0) or (r == 0 and a == 1)

def main():
    p, j1, j2, r, a = map(int, input().split())

    eh_par = (j1 + j2) % 2 == 0

    if (eh_par):
        if (jogador1_jogou_par(p, r, a)):
            print('Jogador 1 ganha!')
        else:
            print('Jogador 2 ganha!')
    else:
        if (jogador1_jogou_impar(p, r, a)):
            print('Jogador 1 ganha!')
        else:
            print('Jogador 2 ganha!')


main()


