
def ehTriangulo(lados):
	lados.sort()

	if (lados[3] < lados[1]+lados[2] and lados[1] < lados[2]+lados[3] and lados[2] < lados[1]+lados[3]) or (lados[2] < lados[0]+lados[1] and lados[0] < lados[1]+lados[2] and lados[1] < lados[0]+lados[2]):
		return 'S'
	else:
		return 'N'
def teste(obtido, esperado):
	if (obtido == esperado):
		prefixo = 'Passou!'
	else:
		prefixo = 'Erro...'

	print('%s obtido: %s esperado: %s' % (prefixo, repr(obtido), repr(esperado)))

def main():
	teste(ehTriangulo([6,9,22,5]),'S')
	teste(ehTriangulo([14,40,12,60]),'N')



if __name__ == '__main__':
	main()
