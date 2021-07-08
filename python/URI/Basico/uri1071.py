a = int(input())
b = int(input())

if (a > b):
    (a, b) = (b, a)

if (a % 2 == 0):
    a = a + 1
else:
    a = a + 2

soma = 0

while (a < b):
    soma = soma + a
    a = a + 2

print(soma)
