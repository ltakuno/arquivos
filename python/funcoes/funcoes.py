def func():
	return 1, 2

def potencia(x):
	quadrado = x**2
	cubo = x**3
	return quadrado, cubo

a, b = func()

print("{}  {}".format(a, b))


t = (10, 20)
a, b = t


print("{}  {}".format(a, b))


q, c = potencia(10)


print("{}  {}".format(q, c))
