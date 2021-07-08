import math

a, b, c = map(float, input().split())

delta = b * b - 4 * a * c
if delta < 0 or a == 0.0:
    print("Impossivel calcular")
else:
    r1 = (-b +math.sqrt(delta))/(2.0 * a)
    r2 = (-b -math.sqrt(delta))/(2.0 * a)
    print("R1 = {:.5f}".format(r1))
    print("R2 = {:.5f}".format(r2))
