# 2143 - a volta do radar

t = int(input())

while t:
    for _ in range(t):
        n = int(input())
        if n % 2 == 0:
            print((n-2)*2 + 2)
        else:
            print((n-1)*2 + 1)

    t = int(input())
