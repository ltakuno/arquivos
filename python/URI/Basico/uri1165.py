# 1165 - número primo

def eh_primo(x):
    for i in range(2, x):
        if (x % i == 0):
            return False
    return True


def main():
    n = int(input())
    while(n):
        x = int(input())
        if (eh_primo(x)):
            print("{} eh primo".format(x))
        else:
            print("{} nao eh primo".format(x))
        n -= 1

main()
