def hohoho(n):
	r = n * 'Ho ' 
	return r[:-1] + '!' 

def teste(esperado, obtido):
	if (esperado == obtido):
		prefixo = 'Passou !'
	else:
		prefixo = 'Erro...'
	print('%s obtido: %s esperado: %s' % (prefixo, repr(obtido), repr(esperado)))

def main():
	teste(hohoho(1), 'Ho!')
	teste(hohoho(2), 'Ho Ho!')
	teste(hohoho(3), 'Ho Ho Ho!')
	teste(hohoho(4), 'Ho Ho Ho Ho!')
	teste(hohoho(5), 'Ho Ho Ho Ho Ho!')
	teste(hohoho(6), 'Ho Ho Ho Ho Ho Ho!')
	teste(hohoho(7), 'Ho Ho Ho Ho Ho Ho Ho!')


if __name__ == '__main__':
	main()
