from calculadora import soma, subtracao

def test_soma():
	assert 5 == soma(3,2)

def test_subtracao():
	assert 1 == subtracao(3,2)
