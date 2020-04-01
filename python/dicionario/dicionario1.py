total = 0
d = {'gato' : 5, 'cachorro': 6, 'galinha': 12}
for chave in d:
	if (len(chave) > 4):
		total = total + d[chave]

print(total)

