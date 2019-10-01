import bhaskara

class TestBhaskara:
    def testa_uma_raiz(self):
        assert bhaskara.calcular_raizes(1, 0, 0) == (1, 0)


    def testa_duas_raizes(self):
        assert bhaskara.calcular_raizes(1, -5, 6) == (2, 3, 2)


    def testa_zero_raizes(self):
	assert bhaskara.calcular_raizes(10, 10, 10) == 0
	
    def testa_raiz_negativa(self):
	assert bhaskara.calcular_raizes(10, 20, 10) == (1, -1)


        
