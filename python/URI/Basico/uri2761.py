# 2761 - entrada e saida de varios tipos
from struct import pack, unpack
entrada = input()
v= entrada.split()
a = int(v[0])
b = unpack('f', pack('f', float(v[1])))[0]
c = v[2].strip()
d = entrada[entrada.index(v[3]):]

print('{}{:.6f}{}{:.50}'.format(a,b,c,d))
print('{}\t{:.6f}\t{}\t{:.50}'.format(a,b,c,d))
print('{:10d}{:10.6f}{:>10}{:>10}'.format(a,b,c,d))
#print('%10d%10.6f%10s%10s' % (a,b,c,d))


