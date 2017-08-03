soma = 0
padrao = ['---','--*','-*-','-**','*--','*-*','**-','***']
contador_gritos = 0
while (contador_gritos < 3):
	entrada = input()
	for i in range(8):
		if (entrada == padrao[i]):
			soma += i
	if (entrada == 'caw caw'):
		print(soma)
		soma = 0
		contador_gritos += 1
