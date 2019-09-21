from unittest import TestCase, main


def eh_par(valor: int) -> bool:
    """
    Função que verifica se o número é par

    Arg:
        - val: Valor de entrada do tipo inteiro

    """
    try:
        return True if valor % 2 == 0 else False
    except TypeError:
        return False



class Testes(TestCase):
    def test_par(self):
        self.assertEqual(eh_par(2), True)

    def test_impar(self):
        self.assertEqual(eh_par(3), False)

    def test_string(self):
        self.assertEqual(eh_par('string'), False)

if __name__ == '__main__':
    main()

