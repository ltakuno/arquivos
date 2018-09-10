# -*- coding: utf-8 -*-
soma = 0
for n in range(1001):
	if (n % 3 == 0 or n % 5 == 0):
		soma = soma + n

print(soma)
