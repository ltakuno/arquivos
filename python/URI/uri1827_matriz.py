# -*- coding: utf-8 -*-
import sys
try:
  n = input()
  while(n):
    n = int(n)
    vetor = []
    for i in range(n):
      vetor.append('')
      for j in range(n):
        valor = 0
        if (i >= n//3 and i < n-n//3) and (j >= n//3 and j < n-n//3):
          valor = 1
        if (valor == 0 and i == j):
          valor = 2
        if (valor == 0 and i == n-1-j):
          valor = 3
        if (i == n//2 and j == n//2 and n%2 == 1):
          valor = 4
        if (i == n//2-1 or i == n//2) and (j == n//2-1 or j == n//2) and (n%2 == 0):
          valor = 4
        vetor[i] = vetor[i] + str(valor)
          
      print(vetor[i])  
    print()
    n = input()  
except EOFError:
  pass
