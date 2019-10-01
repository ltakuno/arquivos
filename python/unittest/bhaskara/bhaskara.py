import math

def calcular_delta(a, b, c):
	return b ** 2 - 4 * a * c

def calcular_raizes(a, b, c):
	d = calcular_delta(a, b, c)
	if d == 0:
		raiz = -b / (2 * a)
		return 1, raiz
	else:
		if d < 0:
			return 0
		else:
			raiz1 = (-b + math.sqrt(d)) / (2 * a)
			raiz2 = (-b - math.sqrt(d)) / (2 * a)
			return 2, raiz1, raiz2
def main():
	a = float(input("Digite o valor de a:"))
	b = float(input("Digite o valor de b:"))
	c = float(input("Digite o valor de c:"))
	print(calcular_raizes(a, b, c))

