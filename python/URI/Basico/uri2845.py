# 2845 - Festa no polo norte


def mdc(a, b):
    while b:
        a, b = b, a % b
    return a

def main():
    n = int(input())
    v = list(map(int, input().split()))
    x = max(v)

    while True:
        x += 1
        if len(list(filter(lambda k: mdc(k, x) != 1, v))) == 0:
            break
    print(x)


main()
