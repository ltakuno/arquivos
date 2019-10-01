import unittest
from unittest.mock import patch
from funcionario import Funcionario

class TestFuncionario(unittest.TestCase):
    @classmethod    
    def setUpClass(cls):
        print('setUpClass')

    @classmethod    
    def tearDownClass(cls):
        print('tearDownClass')

    def setUp(self):
        print('setUp')
        self.funcionario1 = Funcionario('Jose', 'Silva', 1000)
        self.funcionario2 = Funcionario('Maria', 'Cristina', 2000)

    def tearDown(self):
        print('tearDown')

    ########################################################################
    # test methods
    def test_mail(self):
        self.assertEqual(self.funcionario1.email, 'Jose.Silva@email.com')
        self.assertEqual(self.funcionario2.email, 'Maria.Cristina@email.com')

    def test_nome_completo(self):
        self.assertEqual(self.funcionario1.nome_completo, 'Jose Silva')
        self.assertEqual(self.funcionario2.nome_completo, 'Maria Cristina')

    def test_aplicar_aumento(self):
        self.funcionario1.aplicar_aumento()
        self.funcionario2.aplicar_aumento()

        self.assertEqual(self.funcionario1.salario, 1050)
        self.assertEqual(self.funcionario2.salario, 2100)
    
    def test_escala_mensal(self):
        with patch('funcionario.requests.get') as mocked_get:
            mocked_get.return_value.ok = True
            mocked_get.return_value.text = 'Success'
            escala = self.funcionario1.escala_mensal('Maio')
            mocked_get.assert_called_with('http://empresa.com.br/Silva/Maio')
            self.assertEqual(escala, 'Success')

            mocked_get.return_value.ok = False
            escala = self.funcionario1.escala_mensal('Maio')
            self.assertEqual(escala, 'Bad response!')

if __name__ == '__main__':
    unittest.main()
