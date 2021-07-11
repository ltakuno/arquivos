# 1589 - bob conduite

n = int(input())

while (n):
    r1, r2 = map(int, input().split())
    raio_conduite = (2*r1 + 2*r2)//2
    print(raio_conduite)
    n -= 1
