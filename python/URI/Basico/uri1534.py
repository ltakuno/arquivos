# 1534 - matriz 123

while True:
    try:
        n = int(input())
        for i in range(n):
            for j in range(n):
                if ((i + j + 1) == n):
                    v = 2
                else:
                    if ((i - j + 1) == 1):
                        v = (i - j + 1)
                    else:
                        v = 3
                print(v, end = "")

            print()
    except EOFError:
        break

