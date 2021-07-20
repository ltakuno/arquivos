# 2758 - entrada e saida de numeros reais
from struct import pack, unpack
a, b = map(float, input().split())
a = unpack('f', pack('f', a))[0]
b = unpack('f', pack('f', b))[0]
c, d = map(float, input().split())
print('A = {:f}, B = {:f}'.format(a, b))
print('C = {:f}, D = {:f}'.format(c, d))
print('A = {:.1f}, B = {:.1f}'.format(a, b))
print('C = {:.1f}, D = {:.1f}'.format(c, d))
print('A = {:.2f}, B = {:.2f}'.format(a, b))
print('C = {:.2f}, D = {:.2f}'.format(c, d))
print('A = {:.3f}, B = {:.3f}'.format(a, b))
print('C = {:.3f}, D = {:.3f}'.format(c, d))
print('A = {:.3E}, B = {:.3E}'.format(a, b))
print('C = {:.3E}, D = {:.3E}'.format(c, d))
print('A = {:.0f}, B = {:.0f}'.format(a, b))
print('C = {:.0f}, D = {:.0f}'.format(c, d))

