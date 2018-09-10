#-*- coding: utf-8 -*-

n1 = 1
n2 = 1

soma = 0
while (n1 < 4000000):
#	print(n1)
	if (n1 % 2 == 0):
		soma = soma + n1
	aux = n1 + n2
	n1 = n2
	n2 = aux 



print("soma total: %d" % soma)
