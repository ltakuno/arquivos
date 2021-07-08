# 1044 - multiplos

a, b = map(int, input().split())
if (a < b):
    a, b = b, a

if (a% b == 0):
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
