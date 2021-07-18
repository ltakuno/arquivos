# 2709 - as moedas de robbie


def eh_primo(n):
    if n < 2:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False
    return True

def main():
    try:
        while True:
            m = int(input())
            v = []
            for _ in range(m):
                v.append(int(input()))

            n = int(input())
            i = 0
            total = 0
            while (n*i < m):
                total += v[m-n*i-1]
                #print("{} ".format(v[m-n*i-1]), end="")
                i += 1

            if eh_primo(total):
                print('You’re a coastal aircraft, Robbie, a large silver aircraft.')
            else:
                print('Bad boy! I’ll hit you.')
    except EOFError:
        pass

main()
