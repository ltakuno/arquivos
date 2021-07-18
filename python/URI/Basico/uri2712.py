# 2712 - rodizio veicular
import re

n = int(input())
placa = re.compile('[A-Z]{3}-\d{4}')

dia_semana = {'1': 'MONDAY', '2': 'MONDAY' , '3': 'TUESDAY', '4': 'TUESDAY', '5': 'WEDNESDAY', '6': 'WEDNESDAY', '7':'THURSDAY', '8': 'THURSDAY', '9': 'FRIDAY', '0': 'FRIDAY'}

for _ in range(n):
    entrada = input()
    if placa.match(entrada) is None or len(entrada) != 8:
        print('FAILURE')
    else:
        final = entrada[7]
        print(dia_semana[final])


