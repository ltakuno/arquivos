# -*- coding: utf-8 -*-
import pytest

"""
Dado um valor de compra, preencher um cheque por extenso

15415,16 -> quinze mil quatrocentos e quinze reais e dezesseis centavos
0,05 -> cinco centavos
2,25 -> dois reais e vinte e cinco centavos

"""

def cheque(valor):
    d = {
        2: 'dois',
        3: 'três',
        4: 'quatro',
        5: 'cinco',
        6: 'seis',
        7: 'sete',
        8: 'oito',
        9: 'nove',
        10: 'dez',
        11: 'onze'
    }
    if valor in range(2, 12):
        return d[valor] + ' reais'

    return 'um real'

def test_um_real():
    assert cheque(1) == 'um real'

def test_dois_reais():
    assert cheque(2) == 'dois reais'

def test_tres_reais():
    assert cheque(3) == 'três reais'

def test_nove_reais():
    assert cheque(9) == 'nove reais'

def test_dez_reais():
    assert cheque(10) == 'dez reais'

@pytest.mark.parametrize('valor, esperado', [
    (4, 'quatro reais'),
    (5, 'cinco reais'),
    (6, 'seis reais'),
    (7, 'sete reais'),    
    (8, 'oito reais'),
    (11, 'onze reais'),
])
def test_parametrizado(valor, esperado):
    assert cheque(valor) == esperado

