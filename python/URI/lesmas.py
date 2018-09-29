def nivel_lesmas(lesmas):
	maior = max(lesmas)
	if (maior < 10):
		return 1
	if (maior >= 10 and maior < 20):
		return 2
	if (maior >= 20):
		return 3

def teste(obtido, esperado):
	if (obtido == esperado):
		prefixo = 'Passou!'
	else:
		prefixo = 'Erro...'
	print('%s obtido: %s, esperado: %s' % (prefixo, repr(obtido), repr(esperado)))

def main():
	teste(nivel_lesmas([10,10,10,10,15,18,20,15,11,10]), 3)
	teste(nivel_lesmas([1,5,2,9,5,5,8,4,4,3]), 1)
	teste(nivel_lesmas([19,9,1,4,5,8,6,11,9,7]), 2)

if __name__ == '__main__':
	main()
