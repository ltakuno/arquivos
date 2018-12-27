linhas = open('input.txt').read().split('\n')

estado = linhas[0].split(': ')[1].strip()
num_estados = len(estado)
regras = {}

for linha in linhas[2:]:
	if (linha):
		regra, resultado = linha.split('=>')
		regras[regra.strip()] = resultado.strip()

indice_zero = 0
for t in range(15000):
	estado = '..' + estado + '..'
	novo_estado = ['.' for _ in range(len(estado))]
	estado_aux = '..' + estado + '..'
	indice_zero += 2
	for i in range(len(estado)):
		s = estado_aux[i:i+5]
		novo_estado[i] = regras.get(s, '.')

	ini = 0
	fim = len(novo_estado) - 1
	while (novo_estado[ini] == '.'):
		ini += 1
		indice_zero -= 1

	while (novo_estado[fim] == '.'):
		fim -= 1

	estado = ''.join(novo_estado[ini:fim+1])
	print ("%d %d %s" % (t+1, indice_zero, estado))

indice_zero = -int(50e9) + 90
resposta = 0

for i in range(len(estado)):
	if (estado[i] == '#'):
		resposta += i - indice_zero

print ('part02: %d' % (resposta))


