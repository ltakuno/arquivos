# -*- coding: utf-8 -*-
def KelvinToFahrenheit(Temperatura):
    assert (Temperatura >= 0), "Mais frio que o zero absoluto"
    return ((Temperatura-273)*1.8)+32

print KelvinToFahrenheit(273)
print int(KelvinToFahrenheit(505.8))
print KelvinToFahrenheit(-5)