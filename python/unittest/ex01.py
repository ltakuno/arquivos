from unittest import TestCase, main

def soma(a, b):
	return a + b

class Testes(TestCase):
	def test_soma01(self):
		self.assertEqual(soma(2,2), 4)

if __name__ == '__main__':
	main()
