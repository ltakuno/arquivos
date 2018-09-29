# -*- coding: utf-8 -*-
import sys
nome_arq = sys.argv[1]
texto = []
try:
    arq = open(nome_arq, 'r')
except IOError:
    print 'Não foi possível ler o arquivo: ', nome_arq
else:
    texto = arq.readlines()
    arq.close()

if texto:
    print(texto[0:10])