# 2060 - desafio de bino

n = int(input())
v = list(map(int, input().split()))


m2 = len(list(filter(lambda n: n % 2 == 0, v)))
print('{} Multiplo(s) de 2'.format(m2))

m3 = len(list(filter(lambda n: n % 3 == 0, v)))
print('{} Multiplo(s) de 3'.format(m3))

m4 = len(list(filter(lambda n: n % 4 == 0, v)))
print('{} Multiplo(s) de 4'.format(m4))

m5 = len(list(filter(lambda n: n % 5 == 0, v)))
print('{} Multiplo(s) de 5'.format(m5))
