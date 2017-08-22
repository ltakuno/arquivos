# -*- coding: utf-8 -*-
def divide(a,b):
	q = a // b
	r = a - b * q 
	if (a>0 and b<0 and r<0):
		r = -1 * abs(a) + abs(b) * q 
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

if __name__ == '__main__':
	main()
