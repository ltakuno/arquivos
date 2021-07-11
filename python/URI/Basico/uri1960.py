# 1960 - numeração romana para números de pagina

unidade = ['', 'I', 'II', 'III', 'IV', 'V', 'VI', 'VII', 'VIII', 'IX']
dezena =  ['', 'X', 'XX', 'XXX', 'XL', 'L', 'LX', 'LXX', 'LXXX', 'XC']
centena = ['', 'C', 'CC', 'CCC', 'CD', 'D', 'DC', 'DCC', 'DCCC', 'CM']

n = int(input())

r = unidade[n % 10]
n //= 10
r = dezena[n % 10] + r
n //= 10
r = centena[n % 10] + r

print(r)




