# 2846 - fibonot
n = int(input())

t = 0
a1 = 1
a2 = 1
fibonot = []
while t < n:
    if a1 < a2:
        for x in range(a1+1, a2):
            fibonot.append(x)
            t += 1
    aux = a1 + a2
    a1, a2 = a2, aux

print(fibonot[n-1])




