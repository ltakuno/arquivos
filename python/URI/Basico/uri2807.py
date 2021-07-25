# 2807 - Iccanobif

n = int(input())

a = []
a1, a2 = 1, 1

while n > 0:
    a.append(a1)
    aux = a1 + a2
    a1 = a2
    a2 = aux
    n -= 1

for x in reversed(a[1:]):
    print(x, end= " ")

print(1)
