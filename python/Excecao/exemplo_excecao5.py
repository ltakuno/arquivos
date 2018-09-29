# -*- coding: utf-8 -*-
def frequencia (t, s):
    assert type(s) == str and type(t) == str and len(t) == 1 and len(s) > 1, "Argumento inválido"
    return float(s.count(t))/len(s)*100.0

print(frequencia('a', 'abacate'))

try:
    print(frequencia('aba', 'abacate'))
except AssertionError as e:
    print "Error: ", e