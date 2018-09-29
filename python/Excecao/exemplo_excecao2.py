# -*- coding: utf-8 -*-

from datetime import date
def divide(x,y):
    try:
        resultado = x / y
        return resultado
    except ZeroDivisionError:
        print "Não é possível divisão por zero."
    else:
        print "resultado: ", resultado
    finally:
        print "bloco finally executado"


print "teste ", divide(3,2)
print "teste ", divide(13,2)
print "teste ", divide(4,7)
print "teste ", divide(4,date.today())
