# 1828 - bazinga

t = int(input())
n = 1
jogada = { "tesoura": 0, "papel": 1, "pedra" : 2, "lagarto": 3, "Spock": 4}

while (n <= t):
    sheldon, raj = map(str, input().split())
    r = (jogada[sheldon] - jogada[raj]) % 5 
    if (r == 0):
        print("Caso #{}: De novo!".format(n))
    elif (r == 2 or r == 4):
        print("Caso #{}: Bazinga!".format(n))
    else:
        print("Caso #{}: Raj trapaceou!".format(n))

    n +=1
