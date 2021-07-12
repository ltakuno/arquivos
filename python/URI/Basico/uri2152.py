# 2142 - pepe, ja tirei a vela

n = int(input())

for _ in range(n):
    h, m, o = map(int, input().split())
    if o == 1:
        print('{:02d}:{:02d} - A porta abriu!'.format(h, m))
    else:
        print('{:02d}:{:02d} - A porta fechou!'.format(h, m))


