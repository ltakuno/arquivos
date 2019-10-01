# TestSoma
from operacoes_aritmeticas import soma
import unittest
 
class TestSoma(unittest.TestCase):
	def test_soma_inteiros(self):
		self.assertEqual(soma(1,2),3)

	def test_soma_reais(self):
		self.assertEqual(soma(10.5,2),12.5)

	def test_soma_string(self):
		self.assertEqual(soma('abc','def'),'abcdef')

if __name__ == '__main__':
	unittest.main()

