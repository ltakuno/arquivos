import fatorial

def test_fatorial1():
	assert fatorial.fatorial(1) == 1

def test_fatorial2():
	assert fatorial.fatorial(2) == 2 

def test_fatorial3():
	assert fatorial.fatorial(3) == 6

def test_fatorial4():
	assert fatorial.fatorial(4) == 24

def test_fatorial5():
	assert fatorial.fatorial(5) == 120

def test_fatorial6():
	assert fatorial.fatorial(6) == 720

def test_fatorial7():
	assert fatorial.fatorial(7) == 5040
