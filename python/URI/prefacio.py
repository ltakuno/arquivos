## -*- coding: utf-8 -*-

def divide(a,b):
	q = a//b
	r = a%b
	if r < 0:
		r = r-b
		q = (a-r)/b
	return (q, r)

def teste(obtido, esperado):
	if (obtido == esperado):
		prefixo = 'Passou!!!'
	else:
		prefixo = 'Erro...'
	print('%s obtido: %s esperado: %s' % (prefixo, repr(obtido), repr(esperado)))

def main():
	teste(divide(7,3), (2,1))
	teste(divide(7,-3), (-2,1))
	teste(divide(-7,3), (-3,2))
	teste(divide(-7,-3), (3,2))
	teste(divide(-9,-3), (3,0))
	teste(divide(-9,3), (-3,0))
	teste(divide(-16,3), (-6,2))
	teste(divide(-3,3), (-1,0))
	teste(divide(-1,-2),(1,1))
	teste(divide(-1000,1000),(-1,0))
        teste(divide(-3,-7), (1,4))

if __name__ == '__main__':
	main()
