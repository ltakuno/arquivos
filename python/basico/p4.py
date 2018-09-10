n1 = 4
n2 = 7
termo = 0
soma = 0
while termo < 100:
	print ("%d = %d" % (termo + 1, n1))
	soma = soma + n1
	aux = (n1 + n2) % 10
	n1 = n2	
	n2 = aux 
	termo = termo + 1


print ("total : %d" % (soma))
